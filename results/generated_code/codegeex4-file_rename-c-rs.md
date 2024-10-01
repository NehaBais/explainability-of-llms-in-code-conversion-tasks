The equivalent code in Rust would be:

```rust
use std::fs;

fn main() {
    fs::rename("input.txt", "output.txt").expect("Failed to rename file");
    fs::rename("docs", "mydocs").expect("Failed to rename directory");

    let root_dir = "/"; // or &"/".to_string()
    fs::rename(root_dir.to_string() + "input.txt", root_dir.to_string() + "output.txt")
        .expect("Failed to rename file in root");
    fs::rename(root_dir.to_string() + "docs", root_dir.to_string() + "mydocs")
        .expect("Failed to rename directory in root");
}
```

Some notes on the Rust code:

1. The `std::fs` module provides I/O related functionality.
2. To rename a file or directory, the `rename` function is used.
3. The expected errors are propagated by calling `.expect()` method on the result of the rename operation.
4. Because there's no guarantee that there will be an `/input.txt` and `/docs` in the filesystem root directory, we have to add it manually using the `root_dir.to_string() + "input.txt"`.
5. The `to_string()` is used to convert a string slice (`&str`) into a String object.
6. We use `expect` instead of panic for simplicity. In more complex code, you might want to handle errors properly instead of just panicking.
