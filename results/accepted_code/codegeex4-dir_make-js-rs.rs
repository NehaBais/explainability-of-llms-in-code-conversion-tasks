use std::fs::{self, DirBuilder};
use std::path::Path;

fn mkdirp(path: &str) -> Result<(), std::io::Error> {
    let p = Path::new(path);

    if p.is_dir() {
        return Ok(());
    }

    match p.parent() {
        Some(parent) => {
            fs::create_dir_all(parent)?;
            mkdirp(p.to_str().unwrap())
        }
        None => Err(std::io::Error::new(
            std::io::ErrorKind::Other,
            "Cannot create directory at root without parent",
        )),
    }
}
