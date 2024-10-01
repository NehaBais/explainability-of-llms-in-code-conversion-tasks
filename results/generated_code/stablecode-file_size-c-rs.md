In Rust, the equivalent code would look like this:

```rust
use std::fs;

fn main() -> std::io::Result<()> {
    let size1 = fs::metadata("input.txt")?.len();
    println!("{}", size1);

    let size2 = fs::metadata("/input.txt")?.len();
    println!("{}", size2));
    Ok(())
}
```
In this Rust version, we use the standard library's `fs` module to get file metadata and then print the length of the file (`st_size`)).

Please note that in Rust, you might need additional dependencies such as `std::fs`, `std::io`, etc.
