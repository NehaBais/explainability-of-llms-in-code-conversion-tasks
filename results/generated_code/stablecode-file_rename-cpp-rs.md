Rust doesn't have a direct equivalent to the `std::rename` function in C++. However, you can use the standard library's `std::filesystem` module to achieve this functionality in Rust.

Here is the equivalent Rust code:

```rust
use std::fs;
use std::path::PathBuf;

fn rename_file() {
    let src = "input.txt";
    let dest = "output.txt";

    // Create a new path for the destination file
    let dest_path = PathBuf::from(dest));

    // Get the current working directory
    let cwd = std::env::current_dir().unwrap();

    // Construct the full source and destination paths
    let src_path = cwd.join(src));
    let dest_path = dest_path.parent().unwrap().join(dest));

    // Check if the source file exists
    if let Ok(_) = fs::metadata(&src_path)) {
        // Rename the source file to the destination file
        fs::rename(&src_path, &dest_path)).unwrap();
    } else {
        println!("Source file does not exist.");
    }
}

fn rename_directory() {
    let src = "docs";
    let dest = "mydocs";

    // Get the current working directory
    let cwd = std::env::current_dir().unwrap();

    // Construct the full source and destination paths
    let src_path = cwd.join(src));
    let dest_path = PathBuf::from(dest));

    // Check if the source directory exists
    if let Ok(_) = fs::metadata(&src_path)) {
        // Rename the source directory to the destination directory
        fs::rename(&src_path, &dest_path)).unwrap();
    } else {
        println!("Source directory does not exist.");
    }
}

fn main() {
    // Rename the file once in the current working directory
    rename_file();

    // Rename the directory once in the filesystem root
    rename_directory();
}
```

This code defines two functions `rename_file` and `rename_directory`, which handle renaming a file and renaming a directory respectively.

In the `main` function, these two functions are called twice each to achieve the desired renaming of files and directories as specified in the problem statement.
