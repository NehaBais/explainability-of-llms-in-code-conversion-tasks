This is a simplified version of the Golang code that creates files and directories in Go. Here's how you'd convert it to Rust:
```rust
use std::fs;
use std::path::Path;

fn main() {
    create_file("input.txt");
    create_file("/input.txt");
    create_dir("docs");
    create_dir("/docs");
}

fn create_file(fn: &str) {
    match fs::File::create(&Path::new(fn)) {
        Ok(_) => println!("file {} created!", fn),
        Err(e) => eprintln!("{}", e),
    }
}

fn create_dir(dn: &str) {
    match fs::create_dir(&Path::new(dn)) {
        Ok(_) => println!("directory {} created!", dn),
        Err(e) => eprintln!("{}", e),
    }
}
```
