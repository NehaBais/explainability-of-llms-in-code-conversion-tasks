The given C code checks for the existence of two files: input.txt and docs, in the current working directory as well as a file named input.txt located at the root level of the filesystem.

Here's how you can do this in Rust:

```rust
use std::fs;

fn main() {
    let current_directory = ".";
    let root_directory = "/";
    
    // Check for regular file in the current directory
    if let Ok(metadata) = fs::metadata("input.txt") {
        if metadata.is_file() {
            println!("input.txt is a regular file");
        } else {
            println!("input.txt is not a regular file");
        }
    } else {
        println!("Couldn't access input.txt in the current directory");
    }

    // Check for directory in the current directory
    if let Ok(metadata) = fs::metadata("docs") {
        if metadata.is_dir() {
            println!("docs is a directory");
        } else {
            println!("docs is not a directory");
        }
    } else {
        println!("Couldn't access docs in the current directory");
    }

    // Check for regular file in the root directory
    if let Ok(metadata) = fs::metadata(root_directory.to_owned() + "input.txt") {
        if metadata.is_file() {
            println!("/input.txt is a regular file");
        } else {
            println!("/input.txt is not a regular file");
        }
    } else {
        println!("Couldn't access /input.txt in the root directory");
    }

    // Check for directory in the root directory
    if let Ok(metadata) = fs::metadata(root_directory.to_owned() + "docs") {
        if metadata.is_dir() {
            println!("/docs is a directory");
        } else {
            println!("/docs is not a directory");
        }
    } else {
        println!("Couldn't access /docs in the root directory");
    }
}
```

This Rust code does exactly what the given C code did. It uses the `std::fs::metadata()` function to get metadata about a file or directory and checks if it is a regular file or a directory using the `is_file()` and `is_dir()` methods respectively.
