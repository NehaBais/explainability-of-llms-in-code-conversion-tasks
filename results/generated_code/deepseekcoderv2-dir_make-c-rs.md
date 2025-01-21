 To convert the given C code to Rust, we need to handle file operations and path manipulation. Rust provides a comprehensive standard library for such tasks, including creating directories with missing parents. Here's how you can implement the same functionality in Rust:

```rust
use std::env;
use std::fs;
use std::path::Path;

fn main() {
    let args: Vec<String> = env::args().collect();
    if args.len() != 2 {
        eprintln!("usage: {} <path>", args[0]);
        return;
    }

    let path_str = &args[1];
    let path = Path::new(path_str);

    // Ensure all parent directories are created
    if !path.exists() {
        match fs::create_dir_all(path) {
            Ok(_) => (),
            Err(e) => {
                eprintln!("Failed to create directory: {}", e);
                return;
            }
        }
    } else {
        let metadata = match fs::metadata(path) {
            Ok(meta) => meta,
            Err(e) => {
                eprintln!("Failed to get metadata: {}", e);
                return;
            }
        };
        if !metadata.is_dir() {
            eprintln!("The specified path is not a directory.");
            return;
        }
    }
}
```

### Explanation:
1. **Command Line Arguments**: The program takes a single command-line argument representing the path to be created.
2. **Path Handling**: Rust's `std::path::Path` is used to handle and manipulate file paths.
3. **Directory Creation**: The `fs::create_dir_all` function is used to create all missing parent directories of the specified path. This function will succeed if the directory already exists or can be created without errors.
4. **Error Handling**: Errors in metadata retrieval or directory creation are reported using `eprintln!`, and the program exits with a non-zero status code on error.

This Rust implementation mirrors the behavior of the C code, ensuring that all necessary directories (including parents) are created if they do not already exist.
