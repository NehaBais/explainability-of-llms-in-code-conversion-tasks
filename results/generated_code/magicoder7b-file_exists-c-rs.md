 In Rust, you can use the `std::fs::metadata` function to get metadata about a file/directory. You then convert this result into an `Option<Metadata>` and check if it's `Some`. If it is, then the file or directory exists; otherwise it does not. Here is how you could implement this in Rust:

```rust
use std::fs;
use std::path::Path;

fn check_reg(path: &str) -> bool {
    match fs::metadata(path) {
        Ok(meta) => meta.is_file(),
        Err(_) => false,
    }
}

fn check_dir(path: &str) -> bool {
    match fs::metadata(path) {
        Ok(meta) => meta.is_dir(),
        Err(_) => false,
    }
}

fn main() {
    let cwd = std::env::current_dir().unwrap();
    
    println!("input.txt is a regular file? {}", 
            if check_reg(Path::new(&cwd).join("input.txt").to_str().unwrap()) { "yes" } else { "no" });

    println!("docs is a directory? {}", 
            if check_dir(Path::new(&cwd).join("docs").to_str().unwrap()) { "yes" } else { "no" });
    
    println!("/input.txt is a regular file? {}", 
            if check_reg("/input.txt") { "yes" } else { "no" });
    
    println!("/docs is a directory? {}", 
            if check_dir("/docs") { "yes" } else { "no" });
}
```
Please note that this code will not work correctly if it is run outside of the root directory. It uses the `std::env::current_dir` function, which returns the current working directory. 

Also, I assumed that "input.txt" and "docs" are in the same directory as the program is being run from. If they are located elsewhere, you should change the paths accordingly.
