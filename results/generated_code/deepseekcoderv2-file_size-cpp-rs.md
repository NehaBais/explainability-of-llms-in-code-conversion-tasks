## Solution:
```rust
use std::fs;
use std::io;

fn print_file_size(filename: &str) -> Result<(), io::Error> {
    let size = fs::metadata(filename)?.len();
    println!("Size of file {} is {} bytes.", filename, size);
    Ok(())
}

fn main() {
    match print_file_size("input.txt") {
        Err(e) => eprintln!("Error: {}", e),
        _ => (),
    }
    match print_file_size("/input.txt") {
        Err(e) => eprintln!("Error: {}", e),
        _ => (),
    }
}
```
