Here's a Rust implementation of the code you provided:
```
use std::fs;
use std::path::Path;
fn main() {
 let path = "./path/to/dir";
 if Path::new(path).exists() {
 return;
 }
 match fs::create_dir_all(path) {
 Ok(_) => (),
 Err(_) => println!("Couldn't create directory {}", path),
 }
}
```
This implementation uses the `std::fs` module to create directories. It first checks if the directory already exists using the `exists()` method of the `Path` struct. If it does, it returns without doing anything. Otherwise, it attempts to create the directory and its parent directories using the `create_dir_all()` function. If successful, it returns without error. If there's an error, it prints a message indicating that the directory couldn't be created.

