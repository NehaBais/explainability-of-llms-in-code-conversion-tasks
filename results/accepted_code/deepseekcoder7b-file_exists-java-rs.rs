use std::fs;
use std::path::{Path, PathBuf};

fn exists_in_current_dir(filename: &str) -> bool {
    let path = Path::new(filename);
    path.exists() && path.is_file() // or .is_dir() for directory check
}

fn exists_in_root(filename: &str) -> bool {
    let path = PathBuf::from("/"); // Root of the FS
    path.push(filename); // Append filename to it.

    match fs::metadata(path) {
        // Get metadata for that file or directory.
        Ok(_) => true,   // If no error occurred, then we found a file/directory.
        Err(_) => false, // Else (e.g., file not existent), it didn't find the file/directory.
    }
}

fn main() {
    assert!(exists_in_current_dir("input.txt"));
    assert!(exists_in_current_dir("docs"));
    assert!(exists_in_root("input.txt"));
    assert!(exists_in_root("docs"));
}
