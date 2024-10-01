use std::fs;
use std::path::Path;

fn mkdir_p(path: &str) -> Result<(), std::io::Error> {
    let path = Path::new(path);
    if !path.exists() {
        fs::create_dir_all(path)?;
    }
    Ok(())
}
