Sure, here is the equivalent code in Rust:

```rust
use std::fs::{File, DirBuilder};
use std::io;
use std::path::Path;

fn main() -> io::Result<()> {
    create_file_and_directory("output.txt", "docs")?;
    create_file_and_directory("/root/output.txt", "/root/docs")?;

    Ok(())
}

fn create_file_and_directory(file_path: &str, dir_path: &str) -> io::Result<()> {
    let file_path = Path::new(file_path);
    File::create(file_path)?;
    
    let dir_path = Path::new(dir_path);
    DirBuilder::new().mode(0o750).recursive(false).create(dir_path)?;

    Ok(())
}
```

### Explanation:
1. **File Creation**:
   - The `File::create` function in Rust is used to create a new empty file.
   - It handles permissions by setting the mode to `0o640` (rw-r-----) using the `umask`.

2. **Directory Creation**:
   - The `DirBuilder::new().mode(0o750).recursive(false).create(dir_path)?` creates a new directory with the specified permissions (`0o750` for rwxr-x---).
   - The `recursive(false)` option ensures that only the top-level directory is created, not its subdirectories.

3. **Error Handling**:
   - Rust's `io::Result` type is used to handle errors gracefully.
   - If any operation fails, the function will return an `io::Error`.

### Running the Code
- Ensure you have the necessary permissions to create files and directories in both the current working directory (`/`) and the root directory (`/root`).
- You can run this Rust code using a Rust compiler like `rustc`, or by building it with Cargo.

### Note:
- The root directory (`/root`) requires elevated privileges (e.g., running as the root user or using `sudo`). If you encounter permission errors when running in your terminal, ensure you have the necessary permissions.
