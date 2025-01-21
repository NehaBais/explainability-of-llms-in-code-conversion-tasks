As an AI text-based model, I can't see the full context of the code provided, but based on the requirements, the Rust equivalent could look like this:

```rust
use std::fs::{create_dir_recursive, Path};

fn main() {
    let path = Path::new("/path/to/dir");
    if !path.exists() {
        create_dir_recursive(path).expect("Failed to create directory");
    }
}
```
In this code, `std::fs::*` is used which is a standard library that provides functions for filesystem operations. The path is being created with the `Path::new()` function and if it does not already exist in the system, `create_dir_recursive()` tries to create all parent directories up until the specified directory, similar to `mkdir -p` command from the C language. 

The `.expect("Failed to create directory")` is used for error handling, which will cause the program to abort if it encounters any errors during this operation. For production-level code you would want to implement more robust error handling.
