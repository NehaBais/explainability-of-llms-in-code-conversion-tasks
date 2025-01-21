Sure, here is the equivalent Rust code for creating a directory and any missing parents. This function will work cross-platform.

```rust
use std::fs;
use std::path::Path;

fn create_directory(path_str: &str) -> Result<(), Box<dyn std::error::Error>> {
    let path = Path::new(path_str);

    if path.exists() {
        return Ok(());
    }

    fs::create_dir_all(path)?;
    
    Ok(())
}

fn main() -> Result<(), Box<dyn std::error::Error>> {
    if std::env::args().len() != 2 {
        eprintln!("usage: mkdir <path>");
        return Err("Invalid number of arguments".into());
    }

    let path_to_create = &std::env::args().nth(1).unwrap();

    create_directory(path_to_create)?;

    Ok(())
}
```

### Explanation:
1. **`create_directory` function**:
   - This function takes a string slice `&str` as the directory path.
   - It checks if the path already exists using `path.exists()`.
   - If the path does not exist, it uses `fs::create_dir_all(path)` to create the directory and any missing parents. The `?` operator is used to propagate errors.

2. **`main` function**:
   - This function handles command-line arguments.
   - It checks if exactly one argument (the path) is provided.
   - If not, it prints a usage message and returns an error.
   - It calls the `create_directory` function with the provided path and handles any errors.

This code will work on various platforms supported by Rust's standard library.
