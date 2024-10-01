In Rust you can use the `std::fs::create_dir_all` function to create a directory recursively if it doesn't already exist. Here is how you could implement this in Rust:

```rust
use std::io;
use std::fs;

fn mkdirp(path: &str) -> io::Result<()> {
    fs::create_dir_all(path)?;
    Ok(())
}
```

This function will return an error if it is unable to create the directory. This could be due to a variety of reasons such as the path already exists but isn't a directory, or there are permissions issues. For more detailed error handling you might want to inspect the `std::io::ErrorKind` returned by `create_dir_all`. 

Keep in mind that unlike Python, Rust errors must be handled at compile-time using one of several methods including use of the question mark operator (`?`) or a match arm.
