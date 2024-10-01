The equivalent code in Rust would be:

```rust
use std::fs;

fn main() {
    let mut current = "input.txt";
    let root = "/";

    if !fs::exists(&current) {
        println!("Current working directory does not contain '{}'", current);
        match fs::read_dir(&root) {
            Ok(entries) => for entry in entries.unwrap() {
                if let Some(_) = entry.file_name() {
                    if !entry.is_dir() && &current == entry.path().to_string() {
                        println!("{} found in root directory", current);
                        break;
                    }
                }
            }
            Err(e) => println!("Error reading files in the directory: {:?}", e),
        }
    } else {
        if let Some(_) = fs::read_dir(&current) {
            println!("{} found in current working directory", current);
        } else if let Err(e) = fs::read_dir(&root) {
            println!("Error reading files in root directory: {:?}", e);
        }
    }
}
```
This code will print whether "input.txt" and "docs" exist in the current working directory or filesystem root respectively. 

Please note that the Rust `fs` module provides a more direct way to handle paths than Python's `os.path` module, which makes it easier to manage directories/files in different systems.
