This is the equivalent Rust code for your C program. This can be implemented in any language that supports filesystem operations as Rust does:

```rust
use std::fs::{create_dir_recursive, Path};

fn main() {
    let path = Path::new("/path/to/dir");
    if ! path.exists() {
        create_dir_recursive(path).expect("Failed to create directory");
    }
}
```

In the Rust version, we use `std::fs::*` which is a standard library that provides functions for filesystem operations. We are using `Path::new()` instead of a C-style string, and `create_dir_recursive()` does exactly what your C program's `mkdir -p` command does: it creates directories recursively until the specified directory is reached in your path. If the directory already exists, the function returns immediately without error. The line `if !path.exists() { create_dir_recursive(path).expect("Failed to create directory"); }` checks whether the directory already exists or not and if not it creates it.

Please note that this code does not handle errors in any way. You would need to add error handling for production-level code depending on your requirements.
