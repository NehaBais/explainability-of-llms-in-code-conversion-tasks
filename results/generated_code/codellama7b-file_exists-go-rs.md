This code can be converted to Rust as follows:

```rust
use std::fs;

fn main() {
    check_file("input.txt");
    check_file("/input.txt");
    check_dir("docs");
    check_dir("/docs");
}

fn check_file(path: &str) -> bool {
    match fs::metadata(path) {
        Ok(meta) => meta.is_file(),
        Err(e) => {
            println!("{}", e);
            false
        }
    }
}

fn check_dir(path: &str) -> bool {
    match fs::metadata(path) {
        Ok(meta) => meta.is_dir(),
        Err(e) => {
            println!("{}", e);
            false
        }
    }
}
```
Note that this code uses the `fs` module from the Rust standard library to interact with the file system. The `check_file()` and `check_dir()` functions take a string parameter representing the path of the file or directory to check, and return a boolean value indicating whether the given path exists and is a file or directory respectively.

The `main()` function calls these two functions twice each with different paths, once for the current working directory and once for a file and directory in the filesystem root.
