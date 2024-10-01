use std::{fs, path::Path};

fn mkdirp(p: &str) -> Result<(), std::io::Error> {
    let p = Path::new(p);
    if p.exists() {
        Ok(()) // Return successful if the directory already exists
    } else {
        fs::create_dir_all(&p) // Create all directories in path recursively
    }
}

fn main() -> Result<(), std::io::Error> {
    mkdirp("./path/to/dir")?; // This will create any missing directories in path
    Ok(())
}
