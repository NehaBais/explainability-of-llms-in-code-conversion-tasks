In Rust, you can use the `std::fs` and `std::path` modules to create a function that mimics the behavior of `mkdir -p`. The `create_dir_all` function in Rust's standard library will create a directory and any missing parent directories. If the directory already exists, it does nothing.

Here is how you can implement this:

```rust
use std::fs;
use std::path::Path;

/// Create a directory and any missing parents.
///
/// This function mimics the behavior of `mkdir -p`.
fn mkdir_p(path: &str) -> Result<(), Box<dyn std::error::Error>> {
    let path = Path::new(path);
    fs::create_dir_all(path)?;
    Ok(())
}

fn main() {
    match mkdir_p("./path/to/dir") {
        Ok(_) => println!("Directory created successfully."),
        Err(e) => eprintln!("Failed to create directory: {}", e),
    }
}
```

### Explanation:

1. **Importing Required Modules**:
   - `std::fs`: Provides functionality for interacting with the file system.
   - `std::path::Path`: Represents a filesystem path, which can be used in various ways to build and manipulate paths.

2. **Defining `mkdir_p` Function**:
   - The function takes a string slice (`&str`) as input, which represents the path to create.
   - It converts this string into a `Path` object using `Path::new(path)`.
   - It then calls `fs::create_dir_all(path)` to create the directory and any missing parent directories. This function returns a `Result`, so we use `?` to propagate any errors.

3. **Error Handling**:
   - If `create_dir_all` is successful, it returns `Ok(())`.
   - If an error occurs (e.g., if the path is invalid or the directory already exists), the error is propagated using `?`.

4. **Main Function**:
   - The `main` function demonstrates how to call `mkdir_p`. It prints a success message on success and an error message on failure.

This implementation should work across different platforms, as Rust's standard library is designed to be cross-platform.
