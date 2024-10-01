use std::fs;
use std::path::Path;

fn check_reg(path: &str) -> bool {
    match fs::metadata(path) {
        Ok(meta) => meta.is_file(),
        Err(_) => false,
    }
}

fn check_dir(path: &str) -> bool {
    match fs::metadata(path) {
        Ok(meta) => meta.is_dir(),
        Err(_) => false,
    }
}

fn main() {
    let cwd = std::env::current_dir().unwrap();

    println!(
        "input.txt is a regular file? {}",
        if check_reg(Path::new(&cwd).join("input.txt").to_str().unwrap()) {
            "yes"
        } else {
            "no"
        }
    );

    println!(
        "docs is a directory? {}",
        if check_dir(Path::new(&cwd).join("docs").to_str().unwrap()) {
            "yes"
        } else {
            "no"
        }
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
