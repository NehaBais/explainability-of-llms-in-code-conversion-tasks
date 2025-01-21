In Rust, the `std::fs` module provides a `File::create` method for creating files and the `DirBuilder` trait for building directories. Here's how you can convert your Python code into Rust:

```rust
use std::fs;
use std::path::{PathBuf, OsStr};

fn create(directory: &str) {
    // Create the file in current directory if it doesn't exist
    fs::File::create(PathBuf::from(directory).join("output.txt")).expect("Failed to create output file");
    
    // Create the directory in current directory if it doesn't exist
    fs::DirBuilder::new()
        .recursive(true)
        .create_dir(PathBuf::from(directory).join("docs"))
        .expect("Failed to create docs directory");

    // Repeat for root directory
    fs::File::create(PathBuf::from("/").join("output.txt")).expect("Failed to create output file");
    
    fs::DirBuilder::new()
        .recursive(true)
        .create_dir(PathBuf::from("/").join("docs"))
        .expect("Failed to create docs directory");
}

fn main() {
    // Example usage
    create(".");  // Create in current directory
    create("/");   // Create in root directory
}
```

Note: The `fs::File::create` method will fail if the file already exists, so this line would need to be adjusted according to your requirement. Additionally, creating directories at the filesystem root (`/`) can have security implications and is generally discouraged for production environments due to potential access issues.
