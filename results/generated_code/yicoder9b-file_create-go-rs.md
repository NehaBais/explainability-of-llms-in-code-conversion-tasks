In Rust, the equivalent code would look like this:

```rust
use std::fs;

fn create_file(path: &str) -> std::io::Result<()> {
    std::fs::File::create(path)?;
    Ok(())
}

fn create_dir(path: &str) -> std::io::Result<()> {
    fs::create_dir(path)?;
    Ok(())
}

fn main() {
    if let Err(e) = create_file("input.txt") {
        println!("{}", e);
    };

    if let Err(e) = create_file("/input.txt") {
        println!("{}", e);
    }

    if let Err(e) = create_dir("docs") {
        println!("{}", e);
    };

    if let Err(e) = create_dir("/docs") {
        println!("{}", e);
    }
}
```
This Rust code performs the same operations as your Go code. It creates an empty file and directory in the current working directory and filesystem root. If there is an error during this operation, it prints the error message to the console.
