To convert the given Python code to Rust, we need to add the use statement for the necessary modules and implement a function that mimics the `mkdirp` function in Python. Here's the equivalent code in Rust:
```rust
use std::fs;

pub fn mkdirp(path: &str) {
    match fs::create_dir_all(path) {
        Ok(_) => println!("Directory created"),
        Err(e) => println!("Error creating directory: {}", e),
    }
}
```
The `std::fs` module contains the necessary functions for creating directories. The `create_dir_all` function creates a directory and any missing parents, similar to the functionality of the `mkdir -p` command in Unix-like operating systems. If there is an error creating the directory, it prints an error message using the `println!` macro.
