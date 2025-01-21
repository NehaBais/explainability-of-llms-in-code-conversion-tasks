 Certainly! Below is a Rust implementation that mimics the behavior of the Python `mkdir -p` command using the standard library's file handling capabilities:

```rust
use std::fs;
use std::io;
use std::path::Path;

fn mkdirp(path: &str) -> io::Result<()> {
    fs::create_dir_all(path)?;
    Ok(())
}

fn main() {
    let path = "./path/to/dir";
    match mkdirp(path) {
        Ok(_) => println!("Directory created successfully."),
        Err(e) => eprintln!("Error creating directory: {}", e),
    }
}
```

### Explanation:
1. **Importing Modules**: We import necessary modules from the standard library:
   - `std::fs` for file system operations.
   - `std::io` for I/O operations, including error handling.
   - `std::path::Path` to handle path manipulations.

2. **Function Definition (`mkdirp`)**:
   - The function takes a string slice (`&str`) representing the path.
   - It uses `fs::create_dir_all(path)?` to create the directory and all necessary parent directories. If the directory already exists, this operation will succeed without any error.
   - The function returns `io::Result<()>`, which is a convenient way to handle potential errors in file operations.

3. **Main Function**:
   - Defines a test path (`./path/to/dir`).
   - Calls the `mkdirp` function and handles the result: if successful, it prints a success message; otherwise, it prints an error message.

This Rust implementation should work similarly to the Python `mkdir -p` command, creating directories and any necessary parent directories without errors if they already exist.
