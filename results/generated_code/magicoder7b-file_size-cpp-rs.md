 Rust version of the code:

```rust
use std::fs;
use std::io::Error;

fn print_file_size(filename: &str) {
    match fs::metadata(filename) {
        Ok(meta) => {
            if meta.is_file() {
                let size = meta.len();
                println!("Size of file {} is {} bytes.", filename, size);
            } else {
                println!("{} is not a regular file", filename);
            }
        },
        Err(e) => eprintln!("Error: {}", e),
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
```

This version of the code uses Rust's `fs` module to query for file metadata, and then checks if the returned result is a regular file (since in Unix-like systems it's possible to have non-regular files like directories or devices), before calculating its size. It will print out an error message with details about what went wrong if there are issues accessing the file.
