In Rust, you can use the `std::fs` module to achieve this functionality. Here is a simple conversion of your Python code to Rust:

```rust
use std::fs;
use std::path::Path;

fn mkdirp(path: &str) {
    fs::create_dir_all(path).unwrap_or_else(|_| panic!("Failed to create directory"));
}
```

The `fs::create_dir_all` function in Rust creates a directory and all of its parent directories. If the directory already exists, it will not return an error. However, if there is any other kind of error (for example, you don't have permission to create the directory), it will panic with the message "Failed to create directory".

Note that `unwrap_or_else` is used here to handle the error condition. In a real-world application, you might want to handle this in a more graceful way rather than panicking.
