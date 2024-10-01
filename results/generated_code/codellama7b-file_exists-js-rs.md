Rust has a different way of doing things compared to JavaScript. Here's how you can rewrite the code using Rust:
```
use std::fs::File;
use std::path::Path;

fn main() {
    let path = Path::new("input.txt");
    if !path.exists() {
        panic!("{} does not exist", path.display());
    }
    
    let path = Path::new("/c/input.txt");
    if !path.exists() {
        panic!("{} does not exist", path.display());
    }
    
    let path = Path::new("docs");
    if !path.exists() {
        panic!("{} does not exist", path.display());
    }
    
    let path = Path::new("/c/docs");
    if !path.exists() {
        panic!("{} does not exist", path.display());
    }
}
```
This code uses the `std::fs` module to check whether a file or directory exists at a given path using the `File::exist()` method. If the file or directory does not exist, the program will panic with an error message indicating which path was not found.

It's worth noting that Rust is a statically typed language, so it requires you to specify the type of the variable before using it, and it also has some safety features like ownership and borrowing, which can help prevent common errors in your code.
