use std::fs;
use std::path;

fn mkdirp(p: &str) -> Result<(), std::io::Error> {
    let p = path::Path::new(&p);

    if !p.exists() {
        fs::create_dir_all(p)?;
    }

    Ok(())
}

fn main() {
    let dir = "path/to/dir";
    mkdirp(dir).unwrap(); // handle errors
}
