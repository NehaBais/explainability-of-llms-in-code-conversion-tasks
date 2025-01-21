use std::fs;
use std::io;

fn check_reg(path: &str) -> io::Result<bool> {
    let metadata = fs::metadata(path)?;
    Ok(metadata.is_file())
}

fn check_dir(path: &str) -> io::Result<bool> {
    let metadata = fs::metadata(path)?;
    Ok(metadata.is_dir())
}

fn main() -> io::Result<()> {
    println!("input.txt is a regular file? {}", check_reg("input.txt").unwrap_or(false));
    println!("docs is a directory? {}", check_dir("docs").unwrap_or(false));
    println!("/input.txt is a regular file? {}", check_reg("/input.txt").unwrap_or(false));
    println!("/docs is a directory? {}", check_dir("/docs").unwrap_or(false));
    Ok(())
}