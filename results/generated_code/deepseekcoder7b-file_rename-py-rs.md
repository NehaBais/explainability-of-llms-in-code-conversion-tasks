Rust has a standard library for file and directory operations, located in `std::fs` module. Here's how you can implement the given code using Rust:

```rust
use std::fs;

fn main() {
    fs::rename("input.txt", "output.txt").unwrap();
    fs::rename("docs", "mydocs").unwrap();
    
    fs::rename("/input.txt", "/output.txt").unwrap();
    fs::rename("/docs", "/mydocs").unwrap();
}
```
Please note that the Rust standard library does not provide a way to specify an explicit root path for file and directory operations, unlike Python's os module which can perform these actions in any location within the filesystem. As such, you should run your Rust program with appropriate permissions to access required files/folders. 

The unwrap() method is used here just for simplicity and this will panic if there's an error during renaming process. In a production environment, error handling must be more sophisticated. 

Also remember that it is not necessary in most cases to specify absolute paths when using `fs::rename` because Rust automatically considers the current working directory of your program as root for relative paths. However, if you're renaming files/directories outside the scope of your program (e.g., system-wide), then you will need to use an absolute path starting with "/".

