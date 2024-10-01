use std::fs::{self, File};
use std::io::{ErrorKind, Result};

/* Check for regular file. */
fn check_reg(path: &str) -> bool {
    if let Ok(metadata) = fs::metadata(&path) {
        metadata.is_file()
    } else {
        false
    }
}

/* Check for directory. */
fn check_dir(path: &str) -> bool {
    if let Ok(metadata) = fs::metadata(&path) {
        metadata.is_dir()
    } else {
        false
    }
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
