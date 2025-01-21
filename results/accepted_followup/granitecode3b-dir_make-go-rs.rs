use std::{error::Error, fmt::Error};
fn create_dir_all(path: &str) -> Result<(), Box<dyn Error>> {
    fs::create_dir_all(path)?;
    Ok(())
}
