```rust
use std::fs;
use std::path::Path;

fn mkdir_p(path: &str) -> Result<(), std::io::Error> {
    let path = Path::new(path);
    if !path.exists() {
        fs::create_dir_all(path)?;
    }
    Ok(())
}
```

**Usage:**

let path = "./path/to/dir";
mkdir_p(path)?;

// Check if the directory exists
assert!(Path::new(path).exists());

**Explanation:**

* The `mkdir_p()` function takes a path string as an argument.
* It converts the path string to a `Path` object using `Path::new()`.
* It checks if the directory already exists using `path.exists()`.
* If the directory does not exist, it calls `fs::create_dir_all()` to create the directory and any missing parent directories.
* The function returns an `Ok(())` result if the directory is successfully created, or an `Err()` result if an error occurs.

**Note:**

* This function is cross-platform and works equally well on Windows, macOS, and Linux.
* The `0770` permission mode is not used in Rust, as it is not needed for creating directories.
* The `assert!()` macro is used to check if the directory was created successfully.
