Here is a possible Rust implementation for the given requirement:

```rust
use std::fs::metadata;
use std::path::Path;

fn main() {
    check_file("input.txt");
    check_dir("docs");

    let root = if cfg!(windows) {"C:\\"} else {"/"};
    check_file(&format!("{}{}",root, "input.txt"));
    check_dir(&format!("{}{}",root, "docs"));
}

fn check_file(path: &str) {
    if Path::new(path).exists() && metadata(path).unwrap().is_file(){
        println!("{} exists and is a file.", path);
    } else {
        println!("{} does not exist or is not a file.", path);
    } 
}

fn check_dir(path: &str) {
    if Path::new(path).exists() && metadata(path).unwrap().is_dir(){
        println!("{} exists and is a directory.", path);
    } else {
        println!("{} does not exist or is not a directory.", path);
    } 
}
```
Please note that Rust doesn't have an exact equivalent of ActiveXObject for file system access like JavaScript. The solution uses the `std::fs` module which provides functions to interact with the filesystem. It checks if the given files or directories exist and whether they are a directory or a file by calling the `exists()`, `is_file()`, and `is_dir()` methods respectively. 
The root directory check is done for "C:\\" on windows and "/" in Unix-like systems.
