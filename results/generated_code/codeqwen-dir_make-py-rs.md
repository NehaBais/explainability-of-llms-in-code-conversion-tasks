The equivalent function in Rust would be:

```rust
use std::fs;

fn mkdirp(path: &str) -> Result<(), std::io::Error> {
    fs::create_dir_all(path)
}
```
