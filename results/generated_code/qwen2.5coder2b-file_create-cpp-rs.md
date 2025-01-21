In Rust, the `std::fs` module provides a method called `remove_dir_all` which can be used to remove directories and its contents recursively. However, removing directories is not allowed in this case as it would delete "output.txt" and "/docs". Also, creating files with no content does not exist for files in Rust. Instead, you can use the `File::write` method on a file created using `File::create`. If the directory does not exist, it will be created.

Here is how to do this in Rust:

```rust
use std::fs;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    // Create "output.txt" if it doesn't exist, with no content.
    fs::File::create("output.txt")?;
    
    // Create "docs" directory if it doesn't exist, with no contents.
    fs::create_dir_all("/docs")?;
   
    Ok(())
}
```
Please note that `?` operator is used here which will return the error as a Result. If there's an error while creating files or directories it will return an Err otherwise it will return Ok.
