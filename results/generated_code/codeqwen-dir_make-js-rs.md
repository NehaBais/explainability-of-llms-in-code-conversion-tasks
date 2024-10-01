Rust's standard library does not provide a direct function like `fs.mkdirp`, but we can implement it manually using `std::path::Path::create_dir_all()` method provided by Rust.

Here is the implementation:

```rust
use std::path::Path;
use std::fs;

fn mkdirp(p: &str) -> Result<(), std::io::Error> {
    let path = Path::new(p);
    if !path.exists() {
        fs::create_dir_all(&path)?;
    }
    Ok(())
}
```

This function first creates a new `Path` object from the given string, then checks if it exists using `.exists()`. If it doesn't exist, we use `create_dir_all()` to create all missing parent directories. Finally, we return `Ok(())`, indicating that everything was successful.

Please note, this function does not offer any error handling for the case where the path already exists and is not a directory. If you want this behavior, you should add another check before creating the directories.
