Here is the equivalent code in Rust:

```rust
use std::fs;
use std::io;

fn file_size(f: &str) -> io::Result<()> {
    let metadata = fs::metadata(f)?;
    println!("{}", metadata.len());
    Ok(())
}

fn main() -> io::Result<()> {
    file_size("input.txt")?;
    file_size("/input.txt")?;
    Ok(())
}
```

In Rust, the `io::Result` type is used to handle errors in I/O operations. The `fs::metadata()` function returns a `Metadata` object containing information about the file, and its `len()` method returns the size of the file.

The `?` operator is used here for convenience to propagate any error up the call stack. If an error occurs, the function will immediately return it. If no errors occur, the function proceeds with the rest of its execution.
