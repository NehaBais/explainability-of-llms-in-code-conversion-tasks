use std::fs;
use std::path::{Path, PathBuf};

fn mkdirp<P: AsRef<Path>>(path: P, mode: u32) -> Result<(), fs::Error> {
    let path = path.as_ref().to_owned();

    if !path.exists() && !path.is_file() {
        fs::create_dir_all(&path)?;
    }

    Ok(())
}
