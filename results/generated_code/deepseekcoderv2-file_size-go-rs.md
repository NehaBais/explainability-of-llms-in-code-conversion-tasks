 Sure, here is the equivalent code in Rust:

```rust
use std::fs;
use std::io;

fn print_file_size(path: &str) {
    match fs::metadata(path) {
        Ok(meta) => println!("{}", meta.len()),
        Err(e) => eprintln!("Error: {}", e),
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
```

This Rust code does the following:
1. Imports necessary modules from the `std::fs` and `std::io` libraries.
2. Defines a function `print_file_size` that takes a file path as an argument.
3. Uses the `fs::metadata` function to get the metadata of the file at the given path.
4. Prints the size of the file if it exists, or prints an error message if it does not.
5. In the `main` function, calls `print_file_size` for both "input.txt" and "/input.txt".
