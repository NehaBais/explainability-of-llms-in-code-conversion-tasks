use std::fs;
use std::io;

fn mkdirp(path: &str) -> io::Result<()> {
    fs::create_dir_all(path)?;
    Ok(())
}

fn main() {
    if let Err(e) = mkdirp("./path/to/dir") {
        println!("Error: {}", e);
    }
}