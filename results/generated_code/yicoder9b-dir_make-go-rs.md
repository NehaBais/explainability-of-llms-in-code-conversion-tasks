In Rust you can use the `std::fs::create_dir_all` function to create a directory along with its missing parents. Here's how it looks:

```rust
use std::{ fs, path::Path };

pub fn mkdir_p(path: &str) -> std::io::Result<()> {
    fs::create_dir_all(Path::new(path))?;
    Ok(())
}
```
This function takes a string representing the directory path and attempts to create it. If any part of the path does not exist, `create_dir_all` will create them. If the directory already exists or can be successfully created, the function returns Ok(()). Otherwise, an error is returned.

You may use this function like:

match mkdir_p("/tmp/some/path/to/dir") {
    Ok(()) => println!("Directory created successfully"),
    Err(e) => println!("Error creating directory: {:?}", e),
}
