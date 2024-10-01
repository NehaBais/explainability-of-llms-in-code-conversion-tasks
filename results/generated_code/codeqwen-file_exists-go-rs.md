The equivalent code in Rust would be:

```rust
use std::fs;
use std::path::PathBuf;

fn print_stat(p: &str) {
    match fs::metadata(p) {
        Ok(i) => if i.is_dir() {
            println!("{} is a directory", p);
        } else {
            println!("{} Is a file", p);
        },
        Err(err) => println!("Error: {}", err),
    }
}

fn main() {
    print_stat("input.txt");
    print_stat("/input.txt"); // this will not work in Rust as it's an absolute path but can be tested with relative paths if needed
    print_stat("docs");
    print_stat("/docs");
}
```

The `fs::metadata(p)` function in Rust returns the metadata for a file or directory. If successful, we then check whether it's a directory (`i.is_dir()`) and print out a message depending on that result. Otherwise, if an error occurs during the operation, we print that as well.

Please note that Rust does not support absolute paths like "/input.txt" or "/docs" because they are relative to the system's root directory, which is different from other programming languages where these types of paths often have a meaning specific to the operating system and its file system structure.
