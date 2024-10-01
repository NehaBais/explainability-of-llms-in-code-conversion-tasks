The equivalent code in Rust would be:

```rust
use std::fs;
use std::io;

fn create_file(fnm: &str) {
    if let Err(err) = fs::File::create(fnm) {
        println!("couldn't create file {}: {}", fnm, err);
        return;
    }
    println!("File {} created!", fnm);
}

fn create_dir(dn: &str) {
    if let Err(err) = fs::create_dir(dn) {
        println!("couldn't create directory {}: {}", dn, err);
        return;
    }
    println!("Directory {} created!", dn);
}

fn main() {
    create_file("input.txt");
    create_file("/input.txt");
    create_dir("docs");
    create_dir("/docs");
}
```

This code uses the `std::fs` and `std::io` modules for file and directory creation, respectively. The function `create_file()` and `create_dir()` are used to create a new empty file or directory with specified name, respectively. If an error occurs during the creation of the file/directory, it is printed to stderr along with the error message. Otherwise, the function prints that the file/directory was successfully created.
