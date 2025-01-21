Here is the equivalent code in Rust:

```rust
use std::fs;
use std::path::Path;

fn print_stat(p: &str) {
    match fs::metadata(p) {
        Ok(metadata) => {
            if metadata.is_dir() {
                println!("{} is a directory", p);
            } else {
                println!("{} is a file", p);
            }
        },
        Err(e) => println!("{}", e),
    }
}

fn main() {
    print_stat("input.txt");
    print_stat("/input.txt");
    print_stat("docs");
    print_stat("/docs");
}
```

This Rust code does the same thing as your Go code. It defines a function `print_stat` which takes a string path, and then tries to get metadata for that path. If it gets an error, it prints the error message. Otherwise, if the path is a directory, it prints that fact; otherwise it says it's a file. In main, it calls `print_stat` on several different paths.
