use std::fs;
use std::path::{Path, PathBuf};

fn exists_in_current_dir(filename: &str) -> bool {
    let path = Path::new(filename);
    path.exists() && path.is_file() // or .is_dir() for directory check
}

fn exists_in_root(filename: &str) -> bool {
    let mut path = PathBuf::from("/");
    path.push(filename);

    match fs::metadata(path) {
        Ok(_) => true,
        Err(_) => false,
    }
}

fn main() {
    assert!(exists_in_current_dir("input.txt"));
    assert!(exists_in_current_dir("docs"));
    assert!(exists_in_root("input.txt"));
    assert!(exists_in_root("docs"));
}
