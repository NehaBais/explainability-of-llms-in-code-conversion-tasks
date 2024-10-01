```rust
use std::fs;
use std::io::Write;

fn create_file(path: &str) {
    let mut file = fs::File::create(path).unwrap();
    file.write_all(b"").unwrap();
    println!("File {} created!", path);
}

fn create_dir(path: &str) {
    fs::create_dir(path).unwrap();
    println!("Directory {} created!", path);
}

fn main() {
    create_file("input.txt");
    create_file("/input.txt");
    create_dir("docs");
    create_dir("/docs");
}
```
