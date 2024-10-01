Here's a Rust implementation of the `mkdir -p` functionality using the `std::fs` module:
```
use std::fs;
fn mkdir_p(path: &str) -> Result<(), std::io::Error> {
 fs::create_dir_all(path)?;
 Ok(())
}
```
This function creates all necessary directories in a path, including any missing parents. If the directory already exists, it returns successfully without doing anything. This implementation should work across different platforms.

