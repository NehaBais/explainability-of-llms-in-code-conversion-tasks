Here is a Rust version of the code you provided:

```rust
use std::fs::metadata;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let metadata = metadata("input.txt")?;
    println!("Size in bytes: {}", metadata.len());

    let root_metadata = metadata("/input.txt")?;
    println!("Root size in bytes: {}", root_metadata.len());

    Ok(())
}
```

This code does the following:
- It uses Rust's `std::fs::metadata` function to get the file metadata for `input.txt`.
- The `?` operator is used to propagate any errors from the `metadata` function call up the stack. If there are no errors, it prints out the size of the file in bytes.
- It does the same thing for a file in the root directory using absolute path `/input.txt`.

Please note that Rust doesn't have an equivalent ActiveX object for working with files on Windows, so you can use this code directly without making any changes to your existing JavaScript code.
