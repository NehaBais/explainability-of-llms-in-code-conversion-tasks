```rust
use std::fs;
use std::os::stat;

fn main() {
    let file_info1 = stat("input.txt").unwrap();
    println!("{}", file_info1.len());

    let file_info2 = fs::metadata("/input.txt").unwrap();
    println!("{}", file_info2.len());
}
```
This is a simple Rust program that uses the `std` crate's `fs` and `os` modules to read file information from both "input.txt" and "/input.txt". 

The `stat` function in Rust returns a `Result` type, so we use the `unwrap()` method to get back the struct containing the file size. The `metadata` function in Rust returns a struct that represents file metadata, which contains the length of the file. The `len()` method on this struct is used to extract the file length in bytes.

This Rust code should provide the same output as the original C code.
