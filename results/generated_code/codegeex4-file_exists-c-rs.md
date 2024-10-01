```rust
use std::fs::{self, File};
use std::io::{ErrorKind, Result};

/* Check for regular file. */
fn check_reg(path: &str) -> bool {
    if let Ok(metadata) = fs::metadata(&path) {
        metadata.is_file()
    } else {
        false
    }
}

/* Check for directory. */
fn check_dir(path: &str) -> bool {
    if let Ok(metadata) = fs::metadata(&path) {
        metadata.is_dir()
    } else {
        false
    }
}

fn main() {
    println!("input.txt is a regular file? {}", 
             if check_reg("input.txt") { "yes" } else { "no" });
    println!("docs is a directory? {}", 
             if check_dir("docs") { "yes" } else { "no" });

    println!("/input.txt is a regular file? {}", 
             if check_reg("/input.txt") { "yes" } else { "no" });
    println!("/docs is a directory? {}", 
             if check_dir("/docs") { "yes" } else { "no" });
}
```
Note that error handling has been slightly simplified in the Rust version. In this context, we assume that if `fs::metadata` returns an error, it means the file or directory does not exist. This may not always be a safe assumption, but for this specific case where you're simply checking for existence, it seems to work fine.
