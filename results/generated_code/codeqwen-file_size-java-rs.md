The equivalent code in Rust would be:

```rust
use std::fs;

fn main() {
    match fs::metadata("file.txt") {
        Ok(m) => println!("{:?}", m.len()),
        Err(e) => println!("Error: {}", e),
    }

    match fs::metadata("/file.txt") {
        Ok(m) => println!("{:?}", m.len()),
        Err(e) => println!("Error: {}", e),
    }
}
```

This code uses the `std::fs::metadata()` function to obtain metadata about a file or directory, and then prints out its size in bytes. The result is wrapped in a `Result` type, which means it can either be successful (Ok) or an error (Err). The `unwrap()` method would be used here to crash the program if there's an error, but because we want to handle errors gracefully, we use pattern matching (`match`) to print out an error message instead.
