use std::fs;
use std::path::Path;

fn mkdirp(path: &str) -> Result<(), Box<dyn std::error::Error>> {
    let _ = fs::create_dir_all(path)?;
    Ok(())
}
