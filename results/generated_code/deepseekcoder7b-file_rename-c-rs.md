The Rust standard library does not provide a direct equivalent for `rename` in the same way that C provides, but you can accomplish this task using the `std::fs::rename()` function. Here is your code translated into Rust:

In current directory: 
```rust
use std::fs;

fn main() -> fs::Result<()> {
    fs::rename("input.txt", "output.txt")?;
    fs::rename("docs", "mydocs")?;
    // fs::rename("/input.txt", "/output.txt")?; This will fail as Rust does not allow renaming files across different drives (i.e., it is not possible to rename files on one disk to another).
    // fs::rename("/docs", "/mydocs")?; This will fail as the file system root of a drive is / by convention and we are already in that directory in current working directory context. You can't move across different drives or filesystems like you would from C using rename() with an absolute path.
    return Ok(());
}
```
You should replace `"input.txt", "output.txt"`, and so on to the actual paths of your files/directories in a real codebase. The Rust version won't compile if you use non-existing filenames or directory names. Remember that error handling is necessary when using file system operations in Rust.

