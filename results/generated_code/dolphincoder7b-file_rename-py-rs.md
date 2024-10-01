The Rust equivalent of the Python code is as follows:

```rust
use std::fs;

fn main() {
    fs::rename("input.txt", "output.txt").expect("Failed to rename file");
    fs::rename("docs", "mydocs").expect("Failed to rename directory");

    let current_dir = std::env::current_dir().unwrap();
    fs::rename(current_dir.join("input.txt"), current_dir.join("output.txt")).expect("Failed to rename file in the current working directory");
    fs::rename(current_dir.join("docs"), current_dir.join("mydocs")).expect("Failed to rename directory in the current working directory");
}
```

Please note, that renaming files and directories requires root privileges or the "sudo" command on Unix systems. Therefore, you might need to adjust the code snippet as per your system's permissions settings.
