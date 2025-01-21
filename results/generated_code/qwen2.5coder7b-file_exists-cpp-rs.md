Sure, here is the equivalent code in Rust:

```rust
use std::fs;
use std::path::{Path, PathBuf};
use std::io;

fn file_exists(path: &str) {
    let path = Path::new(path);

    match fs::metadata(path) {
        Ok(metadata) => {
            println!("{}", path.display());
            if metadata.is_dir() {
                println!(" is a directory");
            } else {
                println!(
                    " exists with a file size of {} bytes.",
                    metadata.len()
                );
            }
        },
        Err(e) => println!("{} does not exist: {}", path.display(), e),
    }
}

fn main() -> io::Result<()> {
    // Current working directory
    file_exists("input.txt");
    file_exists("zero_length.txt");
    file_exists("docs/input.txt");
    file_exists("docs/zero_length.txt");

    // Filesystem root
    file_exists("/input.txt");
    file_exists("/zero_length.txt");
    file_exists("/docs/input.txt");
    file_exists("/docs/zero_length.txt");

    Ok(())
}
```

### Explanation:
1. **Path and Metadata**: 
   - `std::path::{Path, PathBuf}` is used to handle paths.
   - `fs::metadata(path)` retrieves the metadata for the given path.

2. **File Existence Check**:
   - The `match` block is used to handle the result of `fs::metadata`. If successful, it checks whether the path is a directory or a file and prints the appropriate message.
   - If an error occurs (e.g., the file does not exist), it catches the error and prints a message indicating that the file does not exist.

3. **Root Directory Check**:
   - The paths for checking in the root directory are prefixed with `/`.

This code will verify the existence of `input.txt` and `docs/input.txt` both in the current working directory and in the filesystem root.
