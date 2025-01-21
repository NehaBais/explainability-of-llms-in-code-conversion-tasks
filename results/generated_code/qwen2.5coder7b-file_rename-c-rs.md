To convert the given C code to Rust, you can use the `std::fs` module which provides a variety of functions for interacting with the filesystem. Here's how you can achieve the same functionality in Rust:

```rust
use std::fs;
use std::io;

fn main() -> io::Result<()> {
    // Rename files and directories in the current working directory
    rename_file("input.txt", "output.txt")?;
    rename_directory("docs", "mydocs")?;

    // Rename files and directories in the filesystem root (this requires elevated privileges)
    let mut root_path = std::env::current_dir()?;
    root_path.push("/");
    rename_file(&root_path.join("input.txt"), &root_path.join("output.txt"))?;
    rename_directory(&root_path.join("docs"), &root_path.join("mydocs"))?;

    Ok(())
}

fn rename_file(old_name: impl AsRef<std::path::Path>, new_name: impl AsRef<std::path::Path>) -> io::Result<()> {
    fs::rename(old_name, new_name)?;
    println!("Renamed file: {} to {}", old_name.as_ref().display(), new_name.as_ref().display());
    Ok(())
}

fn rename_directory(old_name: impl AsRef<std::path::Path>, new_name: impl AsRef<std::path::Path>) -> io::Result<()> {
    fs::rename(old_name, new_name)?;
    println!("Renamed directory: {} to {}", old_name.as_ref().display(), new_name.as_ref().display());
    Ok(())
}
```

### Explanation:
1. **Imports**: We import `std::fs` for file system operations and `std::io` for handling I/O errors.
2. **main function**: This is the entry point of the Rust program. It calls two helper functions, `rename_file` and `rename_directory`, to rename files and directories in both the current working directory and the filesystem root.
3. **rename_file function**: This function takes two arguments: the old name and the new name. It uses `fs::rename` to perform the renaming and prints a message indicating the change.
4. **rename_directory function**: Similar to `rename_file`, this function renames directories using `fs::rename`.
5. **Handling Errors**: The functions return `io::Result<()>` to handle potential I/O errors gracefully.

### Running the Code:
To run this Rust code, you need to have Rust installed on your system. You can compile and run it using the following commands:

# Save the code in a file named rename.rs
rustc rename.rs
./rename

Note: Renaming files and directories requires appropriate permissions, especially when trying to access or modify the root directory. Ensure you have the necessary privileges to execute these operations.
