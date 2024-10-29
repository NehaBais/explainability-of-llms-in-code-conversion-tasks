Rust doesn't have a direct equivalent of Java's `File` class, but it does provide its own way to handle filesystem operations with the `std::fs` module. Here is how you can accomplish this in Rust:

```rust
use std::fs;

fn main() {
    let file_a = fs::metadata("fileA.txt");
    match file_a {
        Ok(val) => println!("{:,} B", val.len()),
        Err(error) => eprintln!("Couldn't read the file: {}", error),
    }
    
    let file_b = fs::metadata("/fileB.txt");
    match file_b {
        Ok(val) => println!("{:,} B", val.len()),
        Err(error) => eprintln!("Couldn't read the file: {}", error),
    } 
}
```
This code reads metadata of two files and prints their size in bytes formatted with commas as thousands separators. If it cannot get a file's metadata due to some error (like "file not found" or "no permission"), it will print an error message instead. Note that Rust requires explicit error handling, unlike Java which handles exceptions at runtime.

