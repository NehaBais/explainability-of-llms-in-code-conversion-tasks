use std::fs;
use std::path::PathBuf;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let path = PathBuf::from("./path/to/dir");
    if !path.exists() {
        fs::create_dir_all(&path)?;
    }
    Ok(())
}
