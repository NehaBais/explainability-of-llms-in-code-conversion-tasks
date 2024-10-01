use std::fs;
use std::io;

pub fn make_dir(dir_path: &str) -> io::Result<()> {
    fs::create_dir_all(dir_path)?;
    Ok(())
}
