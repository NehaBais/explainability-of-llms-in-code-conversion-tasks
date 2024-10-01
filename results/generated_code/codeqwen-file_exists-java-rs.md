The equivalent Rust code would be:

```rust
use std::fs;

fn main() {
    let mut current_directory = std::env::current_dir().unwrap();
    current_directory.push("docs");
    current_directory.push("input.txt");
    assert!(current_directory.exists());

    if let Some(mut root) = dirs::home_dir() {
        root.push("/docs");
        root.push("input.txt");
        assert!(root.exists());
    }
}
```

This code uses the `std::fs` module to check if a file exists. The current working directory is retrieved using `std::env::current_dir()`. The home directory is obtained with `dirs::home_dir()`, which is an external crate that provides platform-specific directories such as `$HOME` and `%APPDATA%`. 

If you want to check if the file exists in a specific path, you can replace `std::env::current_dir()` with the desired path. The `push` method appends additional components onto the current directory or path.

Please note that both Rust and Java use different APIs for interacting with the filesystem.
