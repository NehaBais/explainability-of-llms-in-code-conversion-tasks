In Rust, you can use the `std::fs` module to achieve the same functionality. Here is how the code would look:

```rust
use std::fs;
use std::path::Path;

fn main() {
    let current_dir = Path::new(".");

    if !current_dir.join("input.txt").is_file() {
        println!("File input.txt does not exist in the current directory.");
    }

    if !current_dir.join("/input.txt").is_file() {
        println!("File /input.txt does not exist in the filesystem root.");
    }

    if !current_dir.join("docs").is_dir() {
        println!("Directory docs does not exist in the current directory.");
    }
    
    if !current_dir.join("/docs").is_dir() {
        println!("Directory /docs does not exist in the filesystem root.");
    }
}
```

Note that, unlike Python, Rust doesn't allow you to start a file path with a forward slash (`/`) in a platform-independent way. On Unix-like systems (e.g., Linux, macOS), an absolute path starts from the root of the file system, but on Windows, it can also start with a drive letter (e.g., `C:\`). Therefore, we use `current_dir.join("/input.txt")` and `current_dir.join("/docs")`, which will work correctly on Unix-like systems.
