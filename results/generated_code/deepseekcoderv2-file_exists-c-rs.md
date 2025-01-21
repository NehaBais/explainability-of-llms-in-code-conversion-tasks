 Sure, here's the equivalent Rust code for the given C code:

```rust
use std::fs;
use std::io;

fn check_reg(path: &str) -> io::Result<bool> {
    let metadata = fs::metadata(path)?;
    Ok(metadata.is_file())
}

fn check_dir(path: &str) -> io::Result<bool> {
    let metadata = fs::metadata(path)?;
    Ok(metadata.is_dir())
}

fn main() -> io::Result<()> {
    println!("input.txt is a regular file? {}", check_reg("input.txt").unwrap_or(false));
    println!("docs is a directory? {}", check_dir("docs").unwrap_or(false));
    println!("/input.txt is a regular file? {}", check_reg("/input.txt").unwrap_or(false));
    println!("/docs is a directory? {}", check_dir("/docs").unwrap_or(false));
    Ok(())
}
```

### Explanation:
1. **Imports**: We use `std::fs` and `std::io` modules for file system operations.
2. **Functions**: 
   - `check_reg` checks if the given path is a regular file.
   - `check_dir` checks if the given path is a directory.
3. **Main Function**: 
   - We call `check_reg` and `check_dir` with the specified paths and print whether they are regular files or directories.
   - The results are unwrapped using `unwrap_or(false)`, which means if there's an error, it defaults to `false`.

This Rust code should behave similarly to the provided C code, checking for the existence of a file (`input.txt`) and directory (`docs`).
