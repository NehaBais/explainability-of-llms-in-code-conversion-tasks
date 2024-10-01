Rust doesn't have a built-in file system API like the FileSystemObject in ActiveX for Javascript. However, you can use the `std::fs` and `std::path` libraries to achieve similar results with some extra complexity:

Here is how it might look like in Rust: 
```rust
use std::fs;
use std::path::Path;

fn main() {
    rename("input.txt", "output.txt");
    rename("c:/input.txt", "c:/output.txt");
    rename_dir("docs", "mydocs");
    rename_dir("c:/docs", "c:/mydocs");
}

fn rename(src: &str, dst: &str) { 
    if Path::new(dst).exists() { 
        fs::remove_file(dst).expect("Failed to remove file"); 
    } 
    fs::rename(src, dst).expect("Failed to rename file"); 
}
  
fn rename_dir(src: &str, dst: &str) {
    if Path::new(dst).exists() {
        fs::remove_dir_all(dst).expect("Failed to remove directory");
    }
    fs::rename(src, dst).expect("Failed to rename directory"); 
}
```
Please replace the file and directory names with your actual filenames and directories path. This will require the `std` feature and it's used in a function, you should include it inside the main function or wherever appropriate:

#[cfg(feature = "std")]
fn main() { ... }
