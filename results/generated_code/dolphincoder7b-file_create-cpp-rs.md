Sure, here's the equivalent Rust code:
```
use std::fs;
use std::fs::File;

fn main() {
    File::create("output.txt").unwrap();
    File::create("/output.txt").unwrap();

    fs::create_dir("docs").expect("Failed to create directory");
    fs::create_dir("/docs").expect("Failed to create directory");
}
```
The Rust code creates an empty file called "output.txt" of size 0 bytes and an empty directory called "docs". This is done twice: once in the current working directory and once in the filesystem root. The `File::create` function creates a new file if it doesn't exist, overwriting its contents if it does. The Rust code uses the `std::fs` module for handling file system operations.
