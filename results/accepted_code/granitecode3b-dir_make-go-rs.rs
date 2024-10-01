use std::fs;
fn create_dir_all(path: &str) -> Result<(), fs::Error> {
    fs::create_dir_all(path)?;
    Ok(())
}
