The equivalent Rust code for your Python code would be:
```rust
use std::fs;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let size = fs::metadata("input.txt")?.len();
    println!("size of input.txt in current directory: {} bytes", size);
    let size_root = fs::metadata("/input.txt")?.len();
    println!("size of /input.txt in root: {} bytes", size_root);
    Ok(())
}
```
This Rust code does the same thing as your Python code, but it uses the standard library `std::fs` to get metadata about a file and then retrieve its length (size) in bytes.
