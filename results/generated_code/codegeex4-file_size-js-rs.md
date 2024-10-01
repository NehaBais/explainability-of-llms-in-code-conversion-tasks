The equivalent code in Rust would be:

```rust
use std::fs;

fn main() {
    let input_file = "input.txt";
    let root_input_file = "/input.txt";

    match fs::metadata(input_file) {
        Ok(metadata) => println!("File size of '{}' is {} bytes", 
                                 input_file, metadata.len()),
        Err(error) => eprintln!("Failed to get file size: {}", error),
    }

    match fs::metadata(root_input_file) {
        Ok(metadata) => println!("File size of '{}' is {} bytes", 
                                 root_input_file, metadata.len()),
        Err(error) => eprintln!("Failed to get file size: {}", error),
    }
}
```

The `fs::metadata` function returns a `Result<Metadata, Error>`, which represents the result of attempting to read metadata for a file or directory. The `metadata.len()` method returns the file's size in bytes.

In this code, the Rust standard library `fs` module is used, along with its `metadata` function to get the file metadata (including size) and then print the file sizes. If there are errors while getting the file metadata (`Err(error)`), those errors will be printed out.
