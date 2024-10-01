Here is the Rust equivalent of your C++ code:

```rust
use std::fs;
fn main() {
    let current_dir = fs::read_dir(".").unwrap();

    for entry in current_dir {
        match entry.unwrap().file_name() {
            "input.txt" => fs::rename("input.txt", "output.txt").expect("Failed to rename file"),
            "docs" => fs::rename("docs", "mydocs").expect("Failed to rename directory"),
            _ => (),
        }
    }

    let root = fs::read_dir("/").unwrap();

    for entry in root {
        match entry.unwrap().file_name() {
            "input.txt" => fs::rename("/input.txt", "/output.txt").expect("Failed to rename file"),
            "docs" => fs::rename("/docs", "/mydocs").expect("Failed to rename directory"),
            _ => (),
        }
    }
}
```

This code performs the same operations as your original C++ code, but in Rust's idiomatic style. The `fs` module provides functions to read and write files from the filesystem. To perform the renaming operation, we use `rename` function of `std::fs`. 

Please note that this code assumes that the user has the necessary permissions to rename files or directories. Otherwise, you may need to add appropriate error handling in the case of permission errors.
