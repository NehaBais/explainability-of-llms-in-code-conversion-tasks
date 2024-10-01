use std::fs::{metadata, File};
use std::io;

/// Check if path exists as a regular file.
fn check_reg(path: &str) -> io::Result<bool> {
    match metadata(path)?.is_file() {
        true => Ok(true),
        false => Ok(false),
    }
}

/// Check if path exists as a directory.
fn check_dir(path: &str) -> io::Result<bool> {
    match metadata(path)?.is_dir() {
        true => Ok(true),
        false => Ok(false),
    }
}

fn main() -> io::Result<()> {
    println!("input.txt is a regular file? {} ", check_reg("input.txt")?);
    println!("docs exists as directory? {} ", check_dir("docs")?);
    println!(
        "/input.txt is a regular file? {} ",
        check_reg("/input.txt")?
    );
    println!("/docs exists as directory? {} ", check_dir("/docs")?);
    Ok(())
}
