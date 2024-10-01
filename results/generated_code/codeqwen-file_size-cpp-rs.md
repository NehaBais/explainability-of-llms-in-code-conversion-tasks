Rust has a standard library for file operations and it does not have equivalent of `std::filesystem::file_size()` function but there are crates available like `human-bytes` which can help to convert bytes into human readable format.

Here's the conversion:
```rust
use std::fs;
use human_bytes::human_bytes;

fn print_file_size(filename: &str) {
    match fs::metadata(filename) {
        Ok(metadata) => match metadata.len() {
            size if size > 0 => println!("Size of file {} is {} bytes.", filename, human_bytes(size)),
            _ => println!("File {} is empty.", filename),
        },
        Err(e) => eprintln!("Error getting metadata for {}: {}", filename, e),
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
```
Firstly we need to add the dependency in Cargo.toml:

[dependencies]
human-bytes = "0.1"

Note that Rust's `std::fs::metadata()` returns a `Result` type, meaning it might fail if the file doesn't exist or if there are permissions issues. Hence, we use the `match` keyword to handle these possibilities.
