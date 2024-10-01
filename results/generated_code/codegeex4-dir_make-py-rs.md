To achieve equivalent functionality in Rust, you can use the `std::fs` module to create directories and handle cases where they may already exist. Below is a function named `mkdirp` that attempts to mimic the behavior of the Python `os.makedirs` with the `exist_ok=True` flag:

```rust
use std::fs;
use std::path::Path;

pub fn mkdirp<P: AsRef<Path>>(path: P) -> Result<(), std::io::Error> {
    fs::create_dir_all(path.as_ref())
}

fn main() {
    // Example usage
    if let Err(e) = mkdirp("./path/to/dir") {
        eprintln!("Failed to create directory: {}", e);
    } else {
        println!("Directory created successfully");
    }
}
```

### Explanation:
1. **Importing Necessary Modules**: The `fs` module from the standard library is used for file system operations, while the `path` module helps with manipulating and inspecting filesystem paths.

2. **The `mkdirp` Function**:
   - The function accepts a generic parameter `P` that implements the `AsRef<Path>` trait. This allows it to accept any type that can be referenced as a path.
   - It calls `fs::create_dir_all`, which creates a directory at the specified path, including any necessary parent directories. If the directory already exists, this function will not error and simply return successfully.

3. **Error Handling**: The function returns a `Result` to handle potential errors from file system operations. If an error occurs, it is propagated up to the caller. Otherwise, it indicates success.

4. **Example Usage**: In the `main` function, we demonstrate how to use the `mkdirp` function. We attempt to create the directory specified by the path string and handle any potential errors that might occur during this process.

This implementation should work across different platforms due to Rust's cross-platform nature, ensuring that it behaves similarly to the Python version when executing on POSIX-compatible systems like Linux or macOS.
