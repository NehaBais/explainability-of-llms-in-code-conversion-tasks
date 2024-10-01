The Rust version of the given C++ code is as follows:

```rust
use std::fs;
use std::path::Path;

fn file_exists(path: &str) {
    let path = Path::new(path);
    match fs::metadata(path) {
        Ok(metadata) => {
            if metadata.is_dir() {
                println!("{}: Is a directory", path.display());
            } else {
                println!("{}: exists with a file size of {} bytes.", 
                           path.display(), 
                           metadata.len());
            }
        },
        Err(_) => println!("{}: does not exist", path.display()),
    }
}

fn main() {
    file_exists("input.txt");
    file_exists("zero_length.txt");
    file_exists("docs/input.txt");
    file_exists("docs/zero_length.txt");
}
```

This Rust program does the same as your C++ code. It includes a function `file_exists()` that takes a string reference and checks if the path exists, is it a directory or not. If the path doesn't exist, it will print "doesn't exist".

In the main function, it calls `file_exists()` for different paths in your C++ code.
