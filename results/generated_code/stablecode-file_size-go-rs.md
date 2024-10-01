In Rust, the equivalent code would look like this:

```rust
use std::fs;
use std::path::PathBuf;

fn print_file_size(f: &str) {
    if let Ok(metadata) = fs::metadata(f) {
        println!("{}", metadata.len());
    } else {
        println!("Couldn't read {}", f);
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
```
This Rust code does the same thing as your Golang code: it verifies and prints the size of two files in the current working directory and file system root, respectively. 

Note that in Rust you have to explicitly import the `std::fs` module for file operations related to reading from a file into memory or writing data out of memory back to a file.
