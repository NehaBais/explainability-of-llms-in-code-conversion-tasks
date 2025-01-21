 Sure, here is the equivalent Rust code to achieve the same functionality:

```rust
use std::fs;
use std::io;

fn print_file_size(filename: &str) {
    match fs::metadata(filename) {
        Ok(meta) => {
            let size = meta.len();
            println!("Size of file {} is {} bytes.", filename, size);
        }
        Err(e) => {
            eprintln!("Error: {}", e);
        }
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
```

This Rust code uses the `std::fs` module to get the metadata of the file, including its size. It handles errors using pattern matching and prints appropriate messages. Note that in Rust, paths are handled similarly to C++, but Rust's standard library provides more flexibility for different operating systems regarding path handling.
