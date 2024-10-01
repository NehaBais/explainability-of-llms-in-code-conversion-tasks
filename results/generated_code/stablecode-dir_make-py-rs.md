Rust provides the `std::fs::create_dir_all` function to create a directory and any missing parents in Rust. Below is how you can implement equivalent functionality in Rust:

```rust
use std::fs;

fn mkdirp(path: &str) {
    if let Err(err) = fs::create_dir_all(path) {
        eprintln!("Error while creating directory: {}", err);
    }
}
```
This function uses the `std::fs::create_dir_all` function to create a directory and any missing parents. If an error occurs during the creation of the directory, the function will print an error message. This behavior is equivalent to the `exist_ok=True` argument used in the Python implementation.
