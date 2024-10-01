 Here is the Rust equivalent of the Java code:
```
use std::fs;

fn main() {
    let path = "C:/parent/test";
    match fs::create_dir_all(path) {
        Ok(_) => println!("Directory created successfully"),
        Err(e) => eprintln!("Error creating directory: {}", e),
    }
}
```
This code creates a new directory at the specified path, recursively creating any missing parents. If the directory already exists, it will return successfully without taking any action.
