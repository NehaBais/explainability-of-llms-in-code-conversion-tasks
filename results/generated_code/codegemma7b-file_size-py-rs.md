```rust
use std::fs;

let size = fs::metadata("input.txt").unwrap().len();
let size = fs::metadata("/input.txt").unwrap().len();
```
