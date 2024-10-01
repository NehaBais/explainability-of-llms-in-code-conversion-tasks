use std::fs::metadata;
use std::path::Path;

fn main() {
    check_file("input.txt");
    check_dir("docs");

    let root = if cfg!(windows) { "C:\\" } else { "/" };
    check_file(&format!("{}{}", root, "input.txt"));
    check_dir(&format!("{}{}", root, "docs"));
}

fn check_file(path: &str) {
    if Path::new(path).exists() && metadata(path).unwrap().is_file() {
        println!("{} exists and is a file.", path);
    } else {
        println!("{} does not exist or is not a file.", path);
    }
}

fn check_dir(path: &str) {
    if Path::new(path).exists() && metadata(path).unwrap().is_dir() {
        println!("{} exists and is a directory.", path);
    } else {
        println!("{} does not exist or is not a directory.", path);
    }
}
