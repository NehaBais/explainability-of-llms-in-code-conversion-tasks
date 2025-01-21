Sure, here is the equivalent Rust code for your C program. This is assuming that you have the necessary permissions to read files in the directory and system root.

```rust
use std::fs;

fn main() {
    // Read file size from input.txt in the current working directory
    match fs::metadata("input.txt") {
        Ok(metadata) => println!("File size of input.txt (current directory): {}", metadata.len()),
        Err(err) => eprintln!("Error reading input.txt: {}", err),
    }

    // Read file size from /input.txt in the system root
    match fs::metadata("/input.txt") {
        Ok(metadata) => println!("File size of /input.txt (system root): {}", metadata.len()),
        Err(err) => eprintln!("Error reading /input.txt: {}", err),
    }
}
```

This Rust program uses the `fs` module to read the metadata (which includes the size of the file) for the files `input.txt`. If successful, it prints the size in bytes. It also handles any errors that might occur during the file reading process.
