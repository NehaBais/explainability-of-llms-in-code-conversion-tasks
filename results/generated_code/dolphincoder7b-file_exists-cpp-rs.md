The Rust version of the given C++ code is as follows:

```rust
use std::fs;
use std::io;
use std::path::Path;

fn file_exists(path: &str) {
    let path = Path::new(path);

    if path.exists() {
        match path.is_dir() {
            true => println!("{} is a directory", path.display()),
            false => {
                match fs::metadata(path) {
                    Ok(meta) => println!(
                        "{} exists with a file size of {} bytes.",
                        path.display(),
                        meta.len()
                    ),
                    Err(_) => eprintln!("Failed to get file metadata: {}", io::Error),
                }
            }
        }
    } else {
        println!("{} does not exist", path.display());
    }
}

fn main() {
    file_exists("input.txt");
    file_exists("zero_length.txt");
    file_exists("docs/input.txt");
    file_exists("docs/zero_length.txt");
}
```
In this Rust version, we make use of the `fs` and `io` modules from the standard library to work with files and directories. We also utilize `Path::new()` to create a new path object from a string. Finally, we implement the `file_exists()` function to check if a file or directory exists in the filesystem and print its attributes based on whether it is a file or a directory.
