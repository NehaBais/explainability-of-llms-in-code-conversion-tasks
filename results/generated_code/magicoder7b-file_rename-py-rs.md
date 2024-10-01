 In Rust, you can use the `std::fs::rename` function to rename files and directories as follows:

Here is your Python code translated into Rust:

```rust
use std::fs;

// Current working directory.
let _ = fs::rename("input.txt", "output.txt").unwrap();
let _ = fs::rename("docs", "mydocs").unwrap();

// Filesystem root.
let _ = fs::rename("/input.txt", "/output.txt").unwrap();
let _ = fs::rename("/docs", "/mydocs").unwrap();
```

Please note that in Rust, calling `unwrap()` directly on the result of a function is generally considered bad practice because it will panic if an error occurs (i.e., if the rename operation fails). A better approach would be to handle this with proper error handling:

use std::fs;

match fs::rename("input.txt", "output.txt") {
    Ok(_) => println!("Successfully renamed 'input.txt' into 'output.txt'"),
    Err(e) => eprintln!("Failed to rename 'input.txt': {}", e),
}

match fs::rename("docs", "mydocs") {
    Ok(_) => println!("Successfully renamed 'docs' into 'mydocs'"),
    Err(e) => eprintln!("Failed to rename 'docs': {}", e),
}
