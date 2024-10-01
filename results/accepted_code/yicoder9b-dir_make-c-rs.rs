use std::{error::Error, fs};

pub fn make_directory(path: &str) -> Result<(), Box<dyn Error>> {
    fs::create_dir_all(path)?;
    Ok(())
}
