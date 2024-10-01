```rust
use std::fs;
use std::io;
use std::path::{Path, PathBuf};

pub fn create_directory(directory: &str) -> Result<(), io::Error> {
    let path = Path::new(&directory);

    if fs::metadata(path).is_ok() {
        return Ok(()); // Directory already exists. No action needed.
    } else {
        fs::create_dir_all(path)?;
    }
    Ok(())
}
```
This Rust code does the same thing as the C++ code, but there are some differences:
- In Rust, `std::fs` is used instead of `std::filesystem`. 
- The return type of `create_directory` is a `Result<(), io::Error>` because we're dealing with IO errors. This means that this function will either succeed (return `Ok(())`) or fail with an error (return a value like `Err(io::Error)`). You can handle these errors further in your code if needed.
- The input argument is now the directory to create, not the entire path as in the C++ code. 

Additionally, you could use the `std::path` and `std::fs` modules for more advanced operations with paths and directories. For example, you can check if a path exists using `Path::exists` or iterate over all files in a directory using `read_dir`.
