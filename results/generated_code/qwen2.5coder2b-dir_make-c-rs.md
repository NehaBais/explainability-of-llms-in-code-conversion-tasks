Sure, below is the equivalent Rust code for your problem. Note that you will need to use the `std::fs` module which offers functionalities for creating directories and their parents.

```rust
use std::fs;

fn create_directory(path: &str) -> std::io::Result<()> {
    fs::create_dir_all(path)?;
    Ok(())
}

fn main() -> std::io::Result<()> {
    if let Some(arg) = std::env::args().nth(1) {
        create_directory(&arg)?;
        println!("Directory created successfully");
    } else {
        eprintln!("usage: {} <path>", std::env::args().next().unwrap());
        return Err(std::io::Error::new(std::io::ErrorKind::InvalidInput, "no path specified"));
    }
    Ok(())
}
```

This code will create a directory at the specified path and any missing parent directories. If the file does not exist, it will be created. It will print an error message if an incorrect number of arguments is passed or if no path is provided.
