use std::fs;
use std::io;
use std::path::{Path, PathBuf};

fn file_exists(path: &str) {
    let path = Path::new(path);

    match fs::metadata(path) {
        Ok(metadata) => {
            println!("{}", path.display());
            if metadata.is_dir() {
                println!(" is a directory");
            } else {
                println!(" exists with a file size of {} bytes.", metadata.len());
            }
        }
        Err(e) => println!("{} does not exist: {}", path.display(), e),
    }
}

fn main() -> io::Result<()> {
    // Current working directory
    file_exists("input.txt");
    file_exists("zero_length.txt");
    file_exists("docs/input.txt");
    file_exists("docs/zero_length.txt");

    // Filesystem root
    file_exists("/input.txt");
    file_exists("/zero_length.txt");
    file_exists("/docs/input.txt");
    file_exists("/docs/zero_length.txt");

    Ok(())
}
