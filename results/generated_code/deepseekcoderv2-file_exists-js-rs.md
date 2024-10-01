Rust Code:
```rust
use std::path::PathBuf;
use std::fs;

fn main() {
    // Check if a file called input.txt exists in the current working directory
    let file_exists = PathBuf::from("input.txt").is_file();
    println!("File 'input.txt' exists: {}", file_exists);

    // Check if the file c:/input.txt exists in the root of the filesystem
    let file_exists = PathBuf::from("/c/input.txt").is_file();
    println!("File 'c:/input.txt' exists: {}", file_exists);

    // Check if a directory called docs exists in the current working directory
    let dir_exists = PathBuf::from("docs").is_dir();
    println!("Directory 'docs' exists: {}", dir_exists);

    // Check if the directory c:/docs exists in the root of the filesystem
    let dir_exists = PathBuf::from("/c/docs").is_dir();
    println!("Directory 'c:/docs' exists: {}", dir_exists);
}
```
