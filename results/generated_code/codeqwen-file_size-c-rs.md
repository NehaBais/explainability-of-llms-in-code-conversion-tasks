The equivalent code in Rust would be:

```rust
use std::fs::metadata;

fn main() {
    if let Ok(md) = metadata("input.txt") {
        println!("{}", md.len());
    } else {
        println!("Failed to get metadata for input.txt");
    }

    if let Ok(md) = metadata("/input.txt") {
        println!("{}", md.len());
    } else {
        println!("Failed to get metadata for /input.txt");
    }
}
```

This Rust code does the same thing as your C code - it fetches the metadata of "input.txt" and "/input.txt". If the metadata is successfully fetched, it prints the length (which is the size in bytes) of the file. Otherwise, it displays a failure message.
