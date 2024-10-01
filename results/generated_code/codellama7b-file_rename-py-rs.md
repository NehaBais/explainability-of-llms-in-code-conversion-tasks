In Rust, you can use the `std::fs` module to perform file system operations such as renaming files and directories.

Here's an example of how you could implement the above Python code in Rust:
```
use std::{fs};

// rename input.txt to output.txt in the current working directory
fs::rename("input.txt", "output.txt").unwrap();

// rename docs to mydocs in the current working directory
fs::rename("docs", "mydocs").unwrap();

// rename input.txt to output.txt in the filesystem root
fs::rename(std::path::Path::new("input.txt"), std::path::Path::new("output.txt")).unwrap();

// rename docs to mydocs in the filesystem root
fs::rename(std::path::Path::new("docs"), std::path::Path::new("mydocs")).unwrap();
```
Note that in Rust, you need to use the `std::path::Path` type to represent file paths, as opposed to Python's strings. Also, Rust's `rename` function returns a `Result` value, so you need to call the `unwrap()` method on it to get the result.
