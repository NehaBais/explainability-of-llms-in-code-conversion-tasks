use std::{fs, path::Path};

pub fn mkdir_p(path: &str) -> std::io::Result<()> {
    fs::create_dir_all(Path::new(path))?;
    Ok(())
}
