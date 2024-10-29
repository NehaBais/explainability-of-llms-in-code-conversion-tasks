The Rust standard library does not provide a built-in equivalent to `os.makedirs` in Python. However, you can use the `std::fs::create_dir_all` function from the standard path crate to achieve similar functionality. Below is an implementation of mkdirp in Rust:

```rust
use std::fs;
use std::path::Path;

fn mkdirp(path: &str) -> Result<(), std::io::Error> {
    let _ = fs::create_dir_all(path)?;
    Ok(())
}

fn main() {
    match mkdirp("./test/nested/directory") {
        Ok(_) => println!("Directory created successfully"),
        Err(e) => eprintln!("Failed to create directory: {}", e),
    }
}
```
This Rust program will try to recursively create the directories defined by `path`. It returns an error if any part of the path cannot be created (perhaps because it's a file instead of a directory, or permission is denied). If no such problem exists for all parts of the path, then nothing gets printed and the function returns successfully.

