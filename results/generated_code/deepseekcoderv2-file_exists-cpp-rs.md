 Certainly! Below is the Rust equivalent of the provided C++ code. This Rust code checks if a file or directory exists and whether it's a directory or has a specific size for two different paths.

```rust
use std::path::Path;

fn file_exists(file_name: &str) {
    let path = Path::new(file_name);
    println!("Checking {}...", file_name);
    
    if path.exists() {
        if path.is_dir() {
            println!("{} is a directory", file_name);
        } else {
            match std::fs::metadata(path) {
                Ok(meta) => println!("{} exists with a file size of {} bytes.", file_name, meta.len()),
                Err(_) => println!("Failed to get file size for {}", file_name),
            }
        }
    } else {
        println!("{} does not exist", file_name);
    }
}

fn main() {
    file_exists("input.txt");
    file_exists("zero_length.txt");
    file_exists("docs/input.txt");
    file_exists("docs/zero_length.txt");
}
```

This Rust code does the following:
1. Defines a function `file_exists` that takes a filename as an argument and checks if it exists, whether it's a directory, or its size.
2. Uses `std::path::Path` to handle file paths.
3. Calls the `file_exists` function four times with different filenames: "input.txt", "zero_length.txt", "docs/input.txt", and "docs/zero_length.txt".

Note that in Rust, we use `std::fs::metadata` to get file metadata, which includes the size of the file if it exists. This replaces the need for a specific function like `file_size` in C++.
