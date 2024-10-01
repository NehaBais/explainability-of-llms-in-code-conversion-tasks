use std::fs;
use std::path::Path;

fn check_reg(path: &str) -> bool {
    Path::new(path).exists() && Path::new(path).is_file()
}

fn check_dir(path: &str) -> bool {
    Path::new(path).exists() && Path::new(path).is_dir()
}

fn main() {
    println!("input.txt is a regular file? {}", check_reg("input.txt"));
    println!("docs is a directory? {}", check_dir("docs"));
    println!("/input.txt is a regular file? {}", check_reg("/input.txt"));
    println!("/docs is a directory? {}", check_dir("/docs"));
}
