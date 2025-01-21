In Rust, you can use the `std::fs::rename` function to rename files and directories. Here's how you could convert this C++ code into Rust:
```rust
use std::fs;

fn main() {
    fs::rename("input.txt", "output.txt").expect("Failed to rename 'input.txt' to 'output.txt'");
    fs::rename("docs", "mydocs").expect("Failed to rename 'docs' to 'mydocs'");
    fs::rename("/input.txt", "/output.txt").expect("Failed to rename '/input.txt' to '/output.txt'");
    fs::rename("/docs", "/mydocs").expect("Failed to rename '/docs' to '/mydocs'");
}
```
This Rust code does the same thing as your C++ code - it renames files and directories using `fs::rename`. The `.expect` call is used to handle errors that might be returned by the function.
