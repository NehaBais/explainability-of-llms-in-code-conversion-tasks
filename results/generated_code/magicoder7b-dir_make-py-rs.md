 The equivalent code in Rust would be:

```rust
use std::fs;

fn mkdirp(path: &str) -> Result<(), std::io::Error> {
    fs::create_dir_all(path)
}
```
Please note that this function does not return anything, but it returns a `Result` indicating whether the operation was successful or an error occurred. 

The use of `fs::create_dir_all` ensures that all parent directories are also created if they do not exist yet. If a directory already exists, no error is returned and the function will return successfully.
