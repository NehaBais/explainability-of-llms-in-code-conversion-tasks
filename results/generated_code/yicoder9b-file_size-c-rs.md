In Rust you can use the `std::fs::metadata` function to get information about a file such as size and modification time etc. Here's how your code might look in Rust:

```rust
use std::fs::metadata;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let meta = metadata("input.txt")?;
    println!("{}", meta.len());

    let root_meta = metadata("/")?;
    println!("{}", root_meta.len());

    Ok(())
}
```
Please note:

1. The Rust standard library doesn't have a direct equivalent to `stat`, so we use the `metadata` function from `std::fs` instead. This function retrieves metadata for a file (including its size).
2. We handle errors using the `Result` return type and the `?` operator, which propagates error values upwards in the call stack until an error handling method is encountered. 
3. In Rust println! macro is used instead of C's printf function to print output. 
4. The root directory path '/' has been assumed for file system root. Please replace it with your own if needed.
