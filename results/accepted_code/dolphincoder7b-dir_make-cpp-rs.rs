use std::fs;
use std::io;
use std::path::{Path, PathBuf};

pub fn create_directory(directory: &str) -> Result<(), io::Error> {
    let path = Path::new(&directory);

    if fs::metadata(path).is_ok() {
        return Ok(()); // Directory already exists. No action needed.
    } else {
        fs::create_dir_all(path)?;
    }
    Ok(())
}
