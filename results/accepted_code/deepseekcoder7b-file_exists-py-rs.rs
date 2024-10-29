use std::fs;
use std::path::{Path, PathBuf};

fn check_file_exists(filename: &str) -> bool {
    let path = Path::new(filename);
    match path.exists() && path.is_file() {
        true => true,
        false => false,
    }
}

fn check_directory_exists(dirname: &str) -> bool {
    let path = Path::new(dirname);
    match path.exists() && path.is_dir() {
        true => true,
        false => false,
    }
}

// for current working directory
assert!(check_file_exists("input.txt"));
assert!(check_directory_exists("docs"));

// for file and a directory in the filesystem root ("/" as Unix convention)
assert!(check_file_exists("/input.txt"));
assert!(check_directory_exists("/docs")); // Rust does not support checking if "/docs" exists, you would need to provide an absolute path.
