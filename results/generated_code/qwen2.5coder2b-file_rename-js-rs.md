In Rust, we can use the `std::fs` and `std::path` modules to perform file system operations. Here is the equivalent Rust code:

```rust
use std::fs;
use std::path::{Path, PathBuf};

fn main() {
    // Create a function that performs the required task for one directory
    fn move_directory(src: &str, dest: &str) -> Result<(), Box<dyn std::error::Error>> {
        let src_path = PathBuf::from(src);
        let dest_path = PathBuf::from(dest);

        if src_path.exists() {
            fs::rename(&src_path, &dest_path)?;
        } else {
            return Err(format!("Directory {} does not exist", src).into());
        }

        Ok(())
    }

    // Perform the task for "docs" directory
    move_directory("docs", "mydocs")?;

    // Perform the task for C: drive
    move_directory("c:/docs", "c:/mydocs")?;

    println!("Directories successfully moved.");
}
```

Please note that Rust does not have an `ActiveXObject` equivalent. It is also important to ensure that user has the appropriate permissions before performing these operations as it can lead to errors or unexpected behavior if the user does not have the necessary permissions.

This code will move the specified directories and files from their original locations to the new ones. If the destination directory already exists, it will be overwritten. Also, please note that moving files and folders requires appropriate permissions, otherwise, you may encounter an error such as "Access denied" or "File not found".
