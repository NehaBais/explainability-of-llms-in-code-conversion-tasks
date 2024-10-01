Here's the Rust code that implements the same functionality as the Java code you provided:
```
use std::fs;
fn main() {
 let path = "C:/parent/test";
 match fs::create_dir_all(path) {
 Ok(()) => println!("Path successfully created"),
 Err(e) => eprintln!("Error creating path: {}", e),
 }
}
```
This code uses the `std::fs` module in Rust to create a directory and any missing parents. The `create_dir_all` function takes a single path string as an argument and creates the directory if it doesn't already exist. If the directory already exists, the function returns successfully.
Note that this implementation is cross-platform and should work on Windows, macOS, and Linux systems.

