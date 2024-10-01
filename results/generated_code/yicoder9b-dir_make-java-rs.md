In Rust, the equivalent of Java's `mkdirs()` would be to use the `std::fs` module's `create_dir_all()` function. Here is how you can convert your code:

```rust
use std::error::Error;
use std::path::Path;

fn main() -> Result<(), Box<dyn Error>> {
    let path = Path::new("C:/parent/test");
    std::fs::create_dir_all(path)?;
    println!("path successfully created");
    Ok(())
}
```
This Rust code does the same thing as your Java example, creating a directory with all missing parents. If the directory already exists, `create_dir_all()` will return without any error. If an error occurs (like no write permissions), it is returned and displayed using `?` operator which propagates the error upward if not handled at this location.

Remember to run this code with appropriate privileges, as creating directories often requires write permissions.
