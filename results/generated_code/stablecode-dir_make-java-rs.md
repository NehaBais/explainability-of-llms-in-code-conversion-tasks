Rust doesn't have a built-in method to create directories and any missing parents, similar to the `mkdir -p` command in POSIX. However, this functionality can be achieved using external libraries like `std::fs` or `std::os::unix::fs::create_dir_all()`.

Here is an example of how you might do it:
```rust
use std::fs;

fn main() -> Result<(), std::io::Error> {
    let path = "./path/to/dir";

    // create directories if they don't exist.
    if let Err(e) = fs::create_dir_all(&path) {
        println!("Failed to create directory: {}", e);
    }

    Ok(())
}
```
This code snippet creates a new directory at the given path, and all non-existing parent directories will also be created.
