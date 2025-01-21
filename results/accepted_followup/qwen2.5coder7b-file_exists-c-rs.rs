use std::fs;
use std::path::Path;

fn check_reg(path: &str) -> bool {
    Path::new(path).is_file()
}

fn check_dir(path: &str) -> bool {
    Path::new(path).is_dir()
}

fn main() {
    println!(
        "input.txt is a regular file? {}",
        if check_reg("input.txt") { "yes" } else { "no" }
    );
    println!(
        "docs is a directory? {}",
        if check_dir("docs") { "yes" } else { "no" }
    );
    println!(
        "/input.txt is a regular file? {}",
        if check_reg("/input.txt") { "yes" } else { "no" }
    );
    println!(
        "/docs is a directory? {}",
        if check_dir("/docs") { "yes" } else { "no" }
    );
}
