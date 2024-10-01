 Rust doesn't have a built-in way to handle file sizes like JavaScript does, but we can get the size of a file using `std::fs`. Here is how you could rewrite this in Rust:

```rust
use std::path::Path;
use std::fs;

fn main() {
    let path = Path::new("input.txt");
    let path_root = Path::new("/").join("input.txt");  // join "/" and "input.txt"

    match (fs::metadata(path), fs::metadata(path_root)) {
        (Ok(meta1), Ok(meta2)) => {
            println!("Size of file in current directory: {} bytes", meta1.len());
            println!("Size of file at root: {} bytes", meta2.len());
        },
        _ => {
            eprintln!("An error occurred while reading files metadata");
        }
    }
}
```
This code will get the size of `input.txt` in both the current directory and root directory, if they exist, otherwise it prints an error message. 

Please note that this code uses absolute path for file at root level which is OS dependent (like "/" on Unix-based systems and "C:\\" on Windows). It's worth mentioning that Rust doesn't have the same ActiveXObject like JavaScript does so you might need to handle paths differently depending on your use case.
