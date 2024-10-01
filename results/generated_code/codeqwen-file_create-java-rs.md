In Rust, you can use the `std::fs` module for creating files and directories. Here's how you could translate your Java code to Rust:

```rust
use std::fs;
use std::path::PathBuf;

fn main() {
    create_file("output.txt");
    create_dir("docs");
    create_file(PathBuf::from(std::env::current_dir().unwrap()).join("output.txt"));
    create_dir(PathBuf::from(std::env::current_dir().unwrap()).join("docs"));
}

fn create_file<P: AsRef<std::path::Path>>(path: P) {
    if let Err(e) = fs::File::create(path) {
        eprintln!("Unable to create file: {}", e);
    } else {
        println!("Successfully created file at path {:?}", path.as_ref());
    }
}

fn create_dir<P: AsRef<std::path::Path>>(path: P) {
    if let Err(e) = fs::create_dir(path) {
        eprintln!("Unable to create directory: {}", e);
    } else {
        println!("Successfully created directory at path {:?}", path.as_ref());
    }
}
```

This code defines two functions, `create_file` and `create_dir`, which are used to create a file or a directory respectively. They take in a generic argument `P`, which is anything that can be referenced as a path (`AsRef<std::path::Path>`). The actual paths are built using the `PathBuf` type from the `std::path` module, which allows for easy construction and manipulation of file and directory paths.

The `create_file` function calls `fs::File::create(path)`, which creates a new empty file at the given path if it doesn't already exist. If an error occurs during this process (such as insufficient permissions or disk space), the code prints an error message and continues with the next operation. Otherwise, it prints a success message.

The `create_dir` function calls `fs::create_dir(path)`, which creates a new directory at the given path if it doesn't already exist. If an error occurs during this process (such as insufficient permissions or disk space), the code prints an error message and continues with the next operation. Otherwise, it prints a success message.
