Rust doesn't have an equivalent to the ActiveXObject in JavaScript, so we can use the `std::fs` module that Rust provides for file system operations. Here is how you could do it:

```rust
use std::fs;

fn main() {
    // Current working directory
    let current_dir = fs::metadata(".").is_ok();
    let input_file = fs::metadata("input.txt").is_ok();
    let docs_directory = fs::metadata("docs").is_ok();

    // Filesystem root
    let root_directory = fs::metadata("/").is_ok();
    let root_input_file = fs::metadata("/input.txt").is_ok();
    let root_docs_directory = fs::metadata("/docs").is_ok();

    println!("Current directory exists: {}", current_dir);
    println!("Input file exists in the current directory: {}", input_file);
    println!("Docs directory exists in the current directory: {}", docs_directory);

    println!("Root directory exists: {}", root_directory);
    println!("Input file exists in the root directory: {}", root_input_file);
    println!("Docs directory exists in the root directory: {}", root_docs_directory);
}
```

This program will print `true` if the requested files or directories exist, and `false` otherwise.
