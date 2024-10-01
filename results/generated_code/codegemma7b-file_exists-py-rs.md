```rust
use std::path::Path;

fn main() {
    // Current working directory
    let current_dir = Path::new(".");
    if current_dir.join("input.txt").is_file() && current_dir.join("docs").is_dir() {
        println!("Files and directory exist in current working directory.");
    } else {
        println!("Files and directory do not exist in current working directory.");
    }

    // Filesystem root
    let root_dir = Path::new("/");
    if root_dir.join("input.txt").is_file() && root_dir.join("docs").is_dir() {
        println!("Files and directory exist in filesystem root.");
    } else {
        println!("Files and directory do not exist in filesystem root.");
    }
}
```
