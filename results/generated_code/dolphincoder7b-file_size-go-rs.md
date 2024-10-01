Rust does not have a built-in function to get the file size from an open file, so we will create our own utility function and use `std::fs::metadata` for this purpose:
```rust
use std::fs;
use std::path;

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}

fn print_file_size(f: &str) {
    let path = path::Path::new(&f);
    match fs::metadata(path) {
        Ok(meta) => println!("{}", meta.len()),
        Err(err) => eprintln!("Error: {}", err),
    }
}
```
This program will print the file size (in bytes) for the given files, or print an error message if there is any issue. The `std::fs::metadata` function retrieves a file's metadata from its path and returns a result object. If it can get the metadata successfully, the length of the file in bytes is printed; otherwise, an error is printed instead.
