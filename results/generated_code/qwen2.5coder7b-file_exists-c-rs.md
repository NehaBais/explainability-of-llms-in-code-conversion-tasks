Sure, here's how you can convert the given C code into Rust. In Rust, we'll use the `std::fs` and `std::path` modules to check if a file or directory exists.

```rust
use std::fs;
use std::path::Path;

// Check if a path is a regular file.
fn check_reg(path: &str) -> bool {
    Path::new(path).is_file()
}

// Check if a path is a directory.
fn check_dir(path: &str) -> bool {
    Path::new(path).is_dir()
}

fn main() {
    println!("input.txt is a regular file? {}", if check_reg("input.txt") { "yes" } else { "no" });
    println!("docs is a directory? {}", if check_dir("docs") { "yes" } else { "no" });
    println!("/input.txt is a regular file? {}", if check_reg("/input.txt") { "yes" } else { "no" });
    println!("/docs is a directory? {}", if check_dir("/docs") { "yes" } else { "no" });
}
```

### Explanation:
1. **Importing Modules**: 
   - `std::fs` and `std::path::Path` are imported to interact with the file system.

2. **Function Definitions**:
   - `check_reg(path: &str) -> bool`: This function checks if the given path is a regular file using the `is_file()` method of `Path`.
   - `check_dir(path: &str) -> bool`: This function checks if the given path is a directory using the `is_dir()` method of `Path`.

3. **Main Function**:
   - The main function prints whether each specified path is a regular file or a directory by calling the `check_reg` and `check_dir` functions.

This Rust code achieves the same functionality as the provided C code, verifying the existence of files and directories both in the current working directory and at the filesystem root.
