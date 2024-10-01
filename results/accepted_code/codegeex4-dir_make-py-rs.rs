use std::fs;
use std::path::Path;

pub fn mkdirp<P: AsRef<Path>>(path: P) -> Result<(), std::io::Error> {
    fs::create_dir_all(path.as_ref())
}

fn main() {
    // Example usage
    if let Err(e) = mkdirp("./path/to/dir") {
        eprintln!("Failed to create directory: {}", e);
    } else {
        println!("Directory created successfully");
    }
}
