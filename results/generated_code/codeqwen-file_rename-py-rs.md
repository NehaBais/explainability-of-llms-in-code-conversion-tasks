Rust doesn't have a built-in function for rename but it has the `std::fs` module which provides functionality like this.

Here is your Python code converted to Rust:

```rust
use std::fs;

fn main() {
    let cwd = std::env::current_dir().unwrap();

    // Current working directory
    fs::rename(cwd.join("input.txt"), cwd.join("output.txt")).expect("Unable to rename input.txt");
    fs::rename(cwd.join("docs"), cwd.join("mydocs")).expect("Unable to rename docs");

    // Root directory
    let root = std::path::Path::new("/");
    fs::rename(root.join("input.txt"), root.join("output.txt")).expect("Unable to rename input.txt in the root");
    fs::rename(root.join("docs"), root.join("mydocs")).expect("Unable to rename docs in the root");
}
```

In Rust, you can use `std::path::PathBuf` to represent a path and its methods like `join()` to create new paths from existing ones. The `unwrap()` function is used here to handle potential errors from operations such as joining paths or renaming files - if an error occurs it will panic with the provided message, you can replace this with proper error handling depending on your requirements.
