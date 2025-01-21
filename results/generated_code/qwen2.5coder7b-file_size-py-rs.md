Here is the equivalent code in Rust:

```rust
use std::fs;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let current_size = fs::metadata("input.txt")?.len();
    let root_size = fs::metadata("/input.txt")?.len();

    println!("Size of 'input.txt' in the current working directory: {} bytes", current_size);
    println!("Size of '/input.txt' on the file system root: {} bytes", root_size);

    Ok(())
}
```
This code imports Rust's `fs` module which provides a set of functions for interacting with the file system. It then uses the `metadata()` function to get metadata about the 'input.txt' file in the current working directory and at the root of the file system, printing out their sizes. If any error occurs during these operations (like if 'input.txt' doesn't exist), they are propagated by `?`.
