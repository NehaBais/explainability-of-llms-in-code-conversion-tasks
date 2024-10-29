The Rust programming language does not have direct equivalent to the POSIX `stat()` and related functions which are used in your code. Instead, you can use the `std::fs::metadata()` function from standard library to get metadata of a file or directory. 
Here's how it is done:
```rust
use std::fs;
use std::io::Error;

fn check_reg(path: &str) -> Result<(), Error> {
    let meta = fs::metadata(path)?;
    Ok(println!("{} is a regular file? {}", path, meta.is_file()))
}

fn check_dir(path: &str) -> Result<(), Error> {
    let meta = fs::metadata(path)?;
    Ok(println!("{} is a directory? {}", path, meta.is_dir()))
}

fn main() -> Result<(), Error> {
    check_reg("input.txt")?;
    check_dir("docs")?;
    // If you are in the current working directory 
    // and input.txt is at root of filesystem, no change needed
    check_reg("/input.txt")?;
    check_dir("/docs")?;
    Ok(())
}
```
This code checks if `input.txt` exists and it's a regular file, and similarly for the directory `docs` in current working directory as well as root of filesystem. If any error occurs during this process (such as file/directory not found), an appropriate message is printed out to stderr. It uses the `Result` type extensively for better error handling.

