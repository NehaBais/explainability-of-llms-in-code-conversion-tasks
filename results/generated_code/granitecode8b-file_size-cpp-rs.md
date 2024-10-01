Here's the converted code from C++ to Rust:
```
use std::fs;
use std::io;
fn print_file_size(filename: &str) {
 match fs::metadata(filename) {
 Ok(metadata) => {
 let size = metadata.len();
 println!("Size of file {} is {} bytes.", filename, size);
 }
 Err(err) => {
 eprintln!("Error: {}", err);
 }
 }
}
fn main() {
 print_file_size("input.txt");
 print_file_size("/input.txt");
}
```
In Rust, we use the `fs` module from the standard library to work with files and directories. We use the `metadata` function to retrieve information about a file, such as its size. If the file exists, we print out its size in bytes using the `len` method. If there is an error opening the file, we print an error message to the console using the `eprintln!` macro.

