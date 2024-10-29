use std::fs;
use std::io::Error;

fn check_reg(path: &str) -> Result<(), Error> {
    let meta = fs::metadata(path)?;
    Ok(println!("{} is a regular file? {}", path, meta.is_file()))
}

fn check_dir(path: &str) -> Result<(), Error> {
    let meta = fs::metadata(path)?;
    Ok(println!("{} is a directory? {}", path, meta.is_dir()))
}

fn main() -> Result<(), Error> {
    check_reg("input.txt")?;
    check_dir("docs")?;
    // If you are in the current working directory
    // and input.txt is at root of filesystem, no change needed
    check_reg("/input.txt")?;
    check_dir("/docs")?;
    Ok(())
}
