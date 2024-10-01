The equivalent Rust code for the given Python code would be as follows:

```rust
use std::fs;

fn main() {
    if let Ok(metadata) = fs::metadata("input.txt") {
        if metadata.is_file() {
            println!("File 'input.txt' exists in the current working directory.");
        } else if let Err(_) = fs::metadata("/input.txt") {
            println!("File '/input.txt' does not exist in the root directory.");
        }
    }

    if let Ok(metadata) = fs::metadata("docs") {
        if metadata.is_dir() {
            println!("Directory 'docs' exists in the current working directory.");
        } else if let Err(_) = fs::metadata("/docs") {
            println!("Directory '/docs' does not exist in the root directory.");
        }
    }
}
```

This Rust program uses the `std::fs` module to check for the existence and type (file or directory) of a file named "input.txt" in the current working directory as well as "/input.txt" in the filesystem root. Similarly, it checks if a directory named "docs" exists in the current working directory as well as "/docs" in the filesystem root.
