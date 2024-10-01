Answer:
```rust
use std::fs;
use std::fmt::Display;

fn main() {
    let size_a = fs::metadata("file.txt").unwrap().len();
    println!("{size_a}");

    let size_b = fs::metadata("/file.txt").unwrap().len();
    println!("{size_b}");
}
```
