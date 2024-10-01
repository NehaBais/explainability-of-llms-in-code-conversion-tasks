```rust
use std::fs;

fn main() {
    let size_cwd = fs::metadata("input.txt").expect("Cannot find file in current working directory").len();
    let size_root = fs::metadata("/input.txt").expect("Cannot find file in root directory").len();

    println!("File size in current working directory: {} bytes", size_cwd);
    println!("File size in root directory: {} bytes", size_root);
}
```
