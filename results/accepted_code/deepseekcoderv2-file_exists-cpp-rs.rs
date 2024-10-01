use std::fs;
use std::path::PathBuf;

fn file_exists(file_name: &str) {
    let path = PathBuf::from(file_name);
    if fs::metadata(&path).is_ok() {
        println!("{} exists", file_name);
    } else {
        println!("{} does not exist", file_name);
    }
}

fn main() {
    let root = PathBuf::from("/");
    for path in [
        "input.txt",
        "zero_length.txt",
        "docs/input.txt",
        "docs/zero_length.txt",
    ] {
        if !path.starts_with(&root) {
            file_exists(path);
        } else {
            println!("skipping {}", path);
        }
    }
}
