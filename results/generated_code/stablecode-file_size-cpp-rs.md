Below is the Rust version of your C++ code:
```rust
use std::fs;
use std::io;
use std::path::Path;

fn print_file_size(filename: &str) {
    let path = Path::new(filename);

    match fs::metadata(path) {
        Ok(meta) => {
            println!(
                "Size of file {} is {} bytes.",
                filename, meta.len()
            );
        }
        Err(e) => {
            eprintln!("Error accessing file: {}", e));
        }
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
```
This code will print out the size of "input.txt" in the current directory and root directory respectively. Note that accessing files at root level may require appropriate permissions and precautions.
