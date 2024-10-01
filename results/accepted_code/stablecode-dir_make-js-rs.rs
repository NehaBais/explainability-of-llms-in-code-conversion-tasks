use std::fs;
use std::path::{Path, PathBuf};

/// Recursively create directories if they don't already exist.
pub fn mkdirp(path: impl AsRef<Path>)) -> Result<(), std::io::Error> {
    let path = path.as_ref();

    // Return Ok immediately if the directory already exists.
    if let Ok(_) = fs::metadata(path) {
        return Ok(());
    }

    // Create all parent directories using `fs::create_dir_all`.
    if let Err(e) = fs::create_dir_all(path.parent()) {
        return Err(e);
    }
    
    // Finally, create the directory itself using `fs::create_dir`.
    if let Err(e) = fs::create_dir(path) {
        return Err(e);
    }

    Ok(())
}