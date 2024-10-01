 Rust version of the code:

```rust
use std::path::Path;
use std::fs;

fn file_exists(path: &str) {
    println!("{}", path);
    if let Ok(_) = fs::metadata(path) {
        println!(" exists");
        if Path::new(path).is_dir() {
            println!(" is a directory")
        } else {
            let metadata = fs::metadata(path).unwrap();
            println!(" with a file size of {} bytes", metadata.len())
        }
    } else {
        println!(" does not exist");
    }
}

fn main() {
    file_exists("input.txt");
    file_exists("zero_length.txt");
    file_exists("/docs/input.txt");
    file_exists("/docs/zero_length.txt");
}
```
