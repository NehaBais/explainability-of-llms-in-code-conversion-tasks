In Rust, you can use the `std::fs` and `std::path` modules to perform file and directory operations. Here's how your C++ code might be translated into Rust:

```rust
use std::fs;
use std::path::Path;

fn file_exists(path: &str) {
    let path = Path::new(path);
    println!("{}", path.display());
    if path.exists() {
        if path.is_dir() {
            println!(" is a directory");
        } else {
            match fs::metadata(path) {
                Ok(metadata) => println!(" exists with a file size of {} bytes.", metadata.len()),
                Err(err) => eprintln!(" error getting file size: {:?}", err),
            }
        }
    } else {
        println!(" does not exist");
    }
}

fn main() {
	file_exists("input.txt");
	file_exists("zero_length.txt");
	file_exists("docs/input.txt");
	file_exists("docs/zero_length.txt");
    // for the filesystem root, replace "/" with your system's root directory:
    let root = if cfg!(windows) { "C:\\" } else { "/home/" };
    file_exists(&format!("{}/input.txt", root));
	file_exists(&format!("{}/zero_length.txt", root));
}
```

Please note that the `fs::metadata()` function is used to get file size in bytes and it can return an error if the file does not exist or other issues occur. Therefore, the function call is wrapped with a match block to handle this possibility.
