use std::error::Error;
use std::fs::{create_dir, read_dir};
use std::path::PathBuf;

fn mkdirs<P: AsRef<Path>>(dir: P) -> Result<(), Box<dyn Error>> {
    let mut path = PathBuf::from(dir.as_ref());

    while !path.exists() {
        create_dir(&path)?;

        // Move one level up in the directory hierarchy.
        path.pop();
    }

    Ok(())
}

fn main() {
    let dir = "path/to/dir";

    match mkdirs(dir) {
        Ok(_) => println!("Created directory {} successfully", dir),
        Err(e) => eprintln!("Error creating directory: {}", e),
    }
}
