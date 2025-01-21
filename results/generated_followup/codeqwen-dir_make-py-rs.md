Error: `main` function not found in crate `codeqwen_dir_make_py_rs`.

Fix: Add a `main` function to the Rust file.

Rewritten code:

```rust
use std::fs;

fn mkdirp(path: &str) -> Result<(), std::io::Error> {
    fs::create_dir_all(path)
}

fn main() {
    mkdirp("./path/to/dir").expect("Failed to create directory");
}
```
