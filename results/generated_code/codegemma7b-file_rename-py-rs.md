```rust
use std::fs;

// Rename in current working directory
fs::rename("input.txt", "output.txt").expect("Failed to rename file");
fs::rename("docs", "mydocs").expect("Failed to rename directory");

// Rename in root directory
fs::rename(std::path::Path::new("/").join("input.txt"), std::path::Path::new("/").join("output.txt")).expect("Failed to rename file");
fs::rename(std::path::Path::new("/").join("docs"), std::path::Path::new("/").join("mydocs")).expect("Failed to rename directory");
```
