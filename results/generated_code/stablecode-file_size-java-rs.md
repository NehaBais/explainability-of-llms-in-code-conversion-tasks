In Rust, you can use the `std::fs` module to get file metadata and handle files in a platform-independent way. However, dealing with different types of files (regular files, directories, etc.) and their associated operations is more complex and requires a comprehensive understanding of the I/O primitives provided by Rust.

Here's an equivalent Rust code using the `std::fs` module:
```rust
use std::fs;

fn main() -> std::io::Result<()> {
    let fileA = fs::File::open("file.txt")?;
    let metadataA = fileA.metadata()?;
    println!("{}, A", metadataA.len());

    let fileB = fs::File::open("/file.txt")?;
    let metadataB = fileB.metadata()?;
    println!("{}, B", metadataB.len());

    Ok(())
}
```
This Rust code uses the `std::fs` module to open two files (`fileA` and `fileB`) in the current working directory and the root directory, respectively. It then retrieves the file size in bytes for each file using the `metadata()` method of the `File` struct provided by the `std::fs` module. Finally, it prints out the file sizes for both files.
