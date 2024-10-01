The Rust equivalent of Python's `os` module is `std::fs`. The `get_size` method in the `FileExt` trait from `std::fs` can be used to get a file's size:
```rust
use std::fs;

let current = fs::metadata("input.txt").unwrap().len();
let root = fs::metadata("/input.txt").unwrap().len();
```
