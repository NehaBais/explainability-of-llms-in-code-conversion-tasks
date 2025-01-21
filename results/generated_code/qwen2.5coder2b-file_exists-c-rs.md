```rust
use std::fs;

fn main() {
    let home_path = std::env::home_path().unwrap();
    println!("input.txt is a regular file? {}", fs::metadata(&format!("{}/input.txt", home_path)).map_or(false, |m| m.is_file()));
    println!("docs is a directory? {}", fs::metadata(&format!("{}/docs", home_path)).map_or(false, |m| m.is_dir()));
    println!("/input.txt is a regular file? {}", fs::metadata("/input.txt").map_or(false, |m| m.is_file()));
    println!("/docs is a directory? {}", fs::metadata("/docs").map_or(false, |m| m.is_dir()));
}
```
This Rust code uses the `fs` crate to get the metadata of the file and directory in the current working directory. The `format!` macro is used to concatenate the home path and the names of the files or directories. If a directory does not exist, this returns an error which we unwrap and map it to false if true.
