Rust doesn't have a built-in function to do this yet but you can use the `std::fs::create_dir_all` method which should be equivalent to your Go code.

Here is an example of how it might look in Rust:

```rust
use std::fs;
use std::io::Error;

fn main() {
    let path = "./path/to/dir";
    
    match create_dir_all(path) {
        Ok(_) => println!("Directory {} created successfully", path),
        Err(error) => eprintln!("Failed to create directory: {}", error),
    }
}

fn create_dir_all(path: &str) -> Result<(), Error> {
    fs::create_dir_all(path)?;
    
    Ok(())
}
```
In the above Rust code, `create_dir_all` function tries to create a directory at the provided path and all its parent directories if they do not already exist. If creation is successful it returns an instance of `Result<(), Error>` with Ok variant otherwise Err variant along with the associated error message. The main function then handles these results by printing success or failure messages accordingly.

