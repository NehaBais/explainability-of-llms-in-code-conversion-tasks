```rust
use std::fs;
use std::path::Path;

fn print_file_size(filename: &str) {
    match fs::metadata(filename) {
        Ok(meta) => println!("Size of file {} is {} bytes.", filename, meta.len()),
        Err(err) => eprintln!("{}", err),
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
```
