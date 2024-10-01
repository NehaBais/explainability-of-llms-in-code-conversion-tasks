 The equivalent function in Rust would be:

```rust
use std::fs;
use std::io;

pub fn make_dir(dir_path: &str) -> io::Result<()> {
    fs::create_dir_all(dir_path)?;
    Ok(())
}
```

In the above Rust function, we use `fs::create_dir_all()` method to create a directory and its parent directories as needed. If the directory already exists or is successfully created, it returns `Ok(())`. If there's an error while creating the directory (like permission denied), it will return that error.
