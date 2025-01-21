use std::fs;
use std::path::Path;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    // Renaming files/directories in the current working directory
    fs::rename("input.txt", "output.txt")?;
    fs::rename("docs", "mydocs")?;

    // Renaming files/directories in the filesystem root
    fs::rename(&Path::new("/").join("input.txt"), &Path::new("/").join("output.txt"))?;
    fs::rename(&Path::new("/").join("docs"), &Path::new("/").join("mydocs"))?;

    Ok(())
}