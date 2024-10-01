The equivalent code in Rust would be:

```rust
use std::fs::{exists, File, read_dir};

fn main() {
    let input_txt = "input.txt".to_string();
    let docs = "/docs".to_string();
    
    // Check for regular file in current working directory
    let check_reg_current = if let Ok(stat) = stat(&input_txt) {
        if stat.is_file() {
            true
        } else {
            false
        }
    };
    println!("input.txt is a regular file? {:?}", check_reg_current);

    // Check for directory in current working directory
    let check_dir_current = if let Ok(stat) = stat(&docs) {
        if stat.is_directory() {
            true
        } else {
            false
        }
    };
    println!("/docs is a directory? {:?}", check_dir_current);

    // Check for regular file in root filesystem 
    let check_reg_root = if let Ok(stat) = stat(&input_txt) {
        if stat.is_file() {
            true
        } else {
            false
        }
    };
    println!("/input.txt is a regular file? {:?}", check_reg_root);

    // Check for directory in root filesystem 
    let check_dir_root = if let Ok(stat) = stat(&docs) {
        if stat.is_directory() {
            true
        } else {
            false
        }
    };
    println!("/docs is a directory? {:?}", check_dir_root);
}
```
This code checks whether an input file and directories exist in the current working directory as well as on root filesystem. Note that for both operations it uses the `stat` function to get information about files (including if they are regular files or directories). The `exists` function checks if a file exists, while `read_dir` gets a list of files in a directory.
