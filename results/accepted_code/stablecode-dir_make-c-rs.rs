use std::fs;

fn create_directory(path: &str) -> Result<(), std::io::Error> {
    let path = fs::Path::new(path);

    if let Some(parent) = path.parent() {
        fs::create_dir_all(parent)?;
    }

    Ok(())
}
