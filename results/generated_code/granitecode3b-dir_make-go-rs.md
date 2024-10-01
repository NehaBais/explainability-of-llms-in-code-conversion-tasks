Sure, here's a Rust function that does what you need:
```rust
use std::fs;
fn create_dir_all(path: &str) -> Result<(), fs::Error> {
 fs::create_dir_all(path)?;
 Ok(())
}
```
The `create_dir_all` function takes a path string as an argument and uses the `fs::create_dir_all` function to create the directory and any missing parents. It returns a `Result` type that indicates whether an error occurred or not. If successful, it returns `Ok(())`.

