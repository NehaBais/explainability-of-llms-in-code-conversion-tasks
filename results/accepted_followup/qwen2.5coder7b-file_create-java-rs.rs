use std::fs;
use std::path::Path;

fn main() {
    let paths = [
        Path::new("output.txt"),
        Path::new(&format!("{}/{}", std::env::consts::EXE_DIR, "output.txt")),
        Path::new("docs"),
        Path::new(&format!("{}/{}", std::env::consts::EXE_DIR, "docs")),
    ];

    for path in paths.iter() {
        if let Err(e) = fs::create_dir_all(path) {
            eprintln!("Failed to create directory or file: {}", e);
        }
    }
}
