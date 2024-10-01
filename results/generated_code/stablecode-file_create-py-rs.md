Rust doesn't have the concept of directories or filesystems, so its equivalent functionality will be quite different to what you're asking for in Python.

However, here's a rough equivalent in Rust:

```rust
use std::fs;
use std::os::Path;

fn create(directory: &str) {
    let dir_path = format!("{}/docs", directory);

    // Creates "output.txt" and an empty "docs" directory.
    fs::create_dir(&dir_path).expect("Unable to create docs directory");

    let file_path = format!("{}/output.txt", directory);

    // Creates "output.txt" with size 0 bytes.
    fs::File::create(&file_path).expect("Unable to create output.txt file");
}

fn main() {
    create("/");  // root directory
    create(".here"); // current directory
}
```
This Rust code doesn't exactly replicate the Python script you provided, but it does achieve a similar end result by creating an empty "docs" directory and a zero-byte file named "output.txt". This is done twice: once in the current working directory ("."), and again in the filesystem root ("/").
