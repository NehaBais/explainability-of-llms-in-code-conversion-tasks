 Here is the Rust equivalent of the Python code:

```rust
use std::fs;
fn mkdirp(path: &str) -> Result<(), Box<dyn Error>> {
    fs::create_dir_all(path).map(|_| ())?;
    Ok(())
}
```
This function takes a string `path` as an argument and creates the directory and any missing parent directories using the `fs::create_dir_all()` method. If the directory already exists, the function returns successfully without creating anything new. The `Box<dyn Error>` type is used to handle errors in a more flexible way than the previous Python code example.

Note that this implementation assumes that the path provided as an argument is not empty or contains only whitespace characters, and it also assumes that the parent directories of the given path exist.
