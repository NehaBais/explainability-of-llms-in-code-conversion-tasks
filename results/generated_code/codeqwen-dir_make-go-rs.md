In Rust, you can use the `std::fs` module which provides a function called `create_dir_all` to accomplish this task:

```rust
use std::fs;

fn create_directory(path: &str) -> Result<(), std::io::Error> {
    fs::create_dir_all(path)?;
    Ok(())
}

fn main() {
    let path = "./path/to/dir";
    if let Err(e) = create_directory(path) {
        eprintln!("Failed to create directory: {}", e);
    } else {
        println!("Successfully created directory");
    }
}
```

In the above Rust code, `create_dir_all()` creates a new directory and all of its missing parents. The function returns an error if there are any problems creating the directory, and we can use `?` to propagate errors up the call stack to the main function. If the directory is successfully created, it will return `Ok(())`.

This code assumes that the path has already been validated and absolute or relative as appropriate for your application's needs. You would need to add error handling for invalid paths if this isn't the case.
