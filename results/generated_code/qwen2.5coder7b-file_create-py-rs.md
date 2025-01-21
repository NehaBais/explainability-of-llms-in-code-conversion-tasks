In Rust, you can use the `std::fs` module to perform file and directory operations. Here is an equivalent implementation of your Python code:

```rust
use std::fs;
use std::path::Path;

fn create(directory: &str) {
    let output_path = Path::new(directory).join("output.txt");
    fs::File::create(&output_path)
        .expect("Failed to create file");

    let docs_dir = Path::new(directory).join("docs");
    fs::create_dir(&docs_dir)
        .expect("Failed to create directory");
}

fn main() {
    create("."); // current directory
    create("/"); // root directory
}
```

This code does the following:

1. Imports necessary modules.
2. Defines a `create` function that takes a directory path as an argument.
3. Constructs paths for "output.txt" and "docs" using the provided directory.
4. Creates an empty file at "output_path".
5. Creates an empty directory at "docs_dir".
6. Calls the `create` function with "." (current directory) and "/" (root directory).

Please note that creating a directory in the root directory might require superuser privileges, and running this code as a non-root user could result in permission errors.
