In Rust, you can use the `std::fs` module to achieve this. Here is how you could do it:

```rust
use std::fs;
use std::path::Path;

fn main() {
    let path = Path::new("C:/parent/test");
    match fs::create_dir_all(path) {
        Ok(_) => println!("path successfully created"),
        Err(e) => eprintln!("Error: {}", e),
    }
}
```

This Rust code does the same thing as your Java code. It uses `fs::create_dir_all` to create a directory and any missing parents, just like `mkdir -p` in Unix-like systems. If the directory already exists, it doesn't cause an error.

Note: The path is written in Windows format ("C:/parent/test") because Rust understands these paths on all platforms. However, if you are writing platform-specific code (like a file explorer application) then you would need to use the platform's appropriate syntax (for example, "/Users/user/Documents" on Unix systems).
