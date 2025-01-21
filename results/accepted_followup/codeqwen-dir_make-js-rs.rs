use std::fs;
use std::path::Path;

fn mkdirp(p: &str) -> Result<(), std::io::Error> {
    let path = Path::new(p);
    if !path.exists() {
        fs::create_dir_all(&path)?;
    }
    Ok(())
}

fn main() {
    mkdirp("./path/to/dir");
}
