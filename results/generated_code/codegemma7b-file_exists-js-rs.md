```rust
use std::fs;

// Current working directory
let current_dir = std::env::current_dir().unwrap();
let input_file = current_dir.join("input.txt");
let docs_dir = current_dir.join("docs");

assert!(fs::File::exists(&input_file));
assert!(fs::metadata(&docs_dir).unwrap().is_dir());

// Filesystem root
let root_dir = std::path::Path::new("/");
let input_file = root_dir.join("input.txt");
let docs_dir = root_dir.join("docs");

assert!(fs::File::exists(&input_file));
assert!(fs::metadata(&docs_dir).unwrap().is_dir());
```
