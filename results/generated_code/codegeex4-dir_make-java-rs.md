You can achieve this in Rust using the `std::fs::create_dir_all` function. Here is how to implement it:

```rust
extern crate std;

fn main() {
    match create_dir_all("C:/parent/test") {
        Ok(_) => println!("path successfully created"),
        Err(e) => eprintln!("{}", e),
    }
}

fn create_dir_all(path: &str) -> std::io::Result<()> {
    use std::fs;
    fs::create_dir_all(path)
}
```

This code tries to create a directory at the specified path, along with any necessary but nonexistent parent directories. If the directory already exists, it will return successfully without doing anything.

Note that Rust paths are specified as strings and they support backslashes for Windows paths (e.g., `C:\parent\test`), just like in Java.
