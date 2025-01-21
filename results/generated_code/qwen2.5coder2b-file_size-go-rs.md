The equivalent code in Rust is as follows:

```rust
use std::fs;

fn print_file_size(file: &str) {
    match fs::metadata(file).unwrap() {
        Ok(metadata) => println!("Size of {}: {}", file, metadata.len()),
        Err(e) => eprintln!("Error getting file size: {}", e),
    }
}

fn main() {
    let input_dir_path = "input.txt";
    print_file_size(input_dir_path);

    let root_dir_path = "/";
    print_file_size(root_dir_path);
}
```
This code uses the `fs::metadata` function from the `std::fs` module to get metadata about the file. It then prints out the size of both files.

Note that Rust's file system functions do not have an equivalent for the error handling behavior as in Go. Instead, it uses a pattern where either `unwrap()` is called or the `match` construct is used as shown above, which will return `None` and print out an error message if an issue occurs.
