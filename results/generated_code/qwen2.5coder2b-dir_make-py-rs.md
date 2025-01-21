To convert the given Python code to Rust, you can use the `std::fs` module which provides functions similar to those in Python. Here is a function that does exactly what you need:

```rust
use std::fs;
use std::path::Path;

fn mkdirp(path: &str) -> std::io::Result<()> {
    fs::create_dir_all(path).map_err(|e| e.into())
}
```

This Rust code defines a function `mkdirp` that takes a string `path` as input. It uses the `fs::create_dir_all` method to create all directories in the path, including any missing parent directories. If the directory already exists, it returns `Ok(())`, otherwise it returns an error.

The `map_err(|e| e.into())` is used to convert any errors that occur during the directory creation into a standard Rust error type (`std::io::Error`).
