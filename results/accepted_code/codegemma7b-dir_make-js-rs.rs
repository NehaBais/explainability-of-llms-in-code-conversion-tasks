use std::fs;
use std::path::Path;

fn mkdirp(p: &str) -> std::io::Result<()> {
    let path = Path::new(p);

    if path.exists() {
        return Ok(());
    }

    if let Some(parent) = path.parent() {
        mkdirp(parent.to_str().unwrap())?;
    }

    fs::create_dir_all(path)?;

    Ok(())
}
