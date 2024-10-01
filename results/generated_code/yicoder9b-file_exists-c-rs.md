In Rust we can use the `std::fs` module for file and directory operations. Here is how you would implement this functionality in a similar manner to your C code:

```rust
use std::fs::{metadata, File};
use std::io;

/// Check if path exists as a regular file.
fn check_reg(path: &str) -> io::Result<bool> {
    match metadata(path)?.is_file() {
        true => Ok(true),
        false => Ok(false),
    }
}

/// Check if path exists as a directory.
fn check_dir(path: &str) -> io::Result<bool> {
    match metadata(path)?.is_dir() {
        true => Ok(true),
        false => Ok(false),
    }
}

fn main() -> io::Result<()> {
    println!("input.txt is a regular file? {} ", check_reg("input.txt")?);
    println!("docs exists as directory? {} ", check_dir("docs")?);
    println!("/input.txt is a regular file? {} ", check_reg("/input.txt")?);
    println!("/docs exists as directory? {} ", check_dir("/docs")?);
    Ok(())
}
```
This code checks the existence of files and directories in a similar manner to your C program. It uses the `metadata` function from the `std::fs` module to get information about the file system object at the specified path, then it checks if that object is a regular file or directory respectively.
