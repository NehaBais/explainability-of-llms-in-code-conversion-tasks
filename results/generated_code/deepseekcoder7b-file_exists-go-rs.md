In Rust, you can use the `std::fs` module for checking if a file or directory exists on your filesystem. Here's how to rewrite your Golang code in Rust:

```rust
use std::fs;
use std::io::ErrorKind;
use std::path::Path;

fn print_stat(p: &str) {
    match Path::new(p).exists() {
        true => match Path::new(p).is_dir() {
            true  => println!("{} is a directory", p),
            false => println!("{} is a file", p),
        },
        false if p.starts_with('/') => println!("Path does not exist: {}", p),
        false => match fs::metadata(p) {
            Ok(_)      => println!("Current directory path does not exist"),
            Err(e) if e.kind() == ErrorKind::NotFound => println!("File or directory does not exist: {}", p),
            Err(e)    => println!("Error encountered while checking file or directory existence: {}", e),
        },
    }
}

fn main() {
    print_stat("input.txt");
    print_stat("/input.txt");
    print_stat("docs");
    print_stat("/docs");
}
```
This Rust code will do exactly the same thing as your Golang code - it checks if a file called `input.txt` and a directory called `docs` exist in the current working directory and at filesystem root (represented by '/'). The path to these files are passed as strings to the function print_stat().

