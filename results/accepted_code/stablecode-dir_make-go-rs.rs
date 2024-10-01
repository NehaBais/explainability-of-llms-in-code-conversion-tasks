use std::fs;
use std::path::PathBuf;

fn create_directory(path: &str) {
    let path = PathBuf::from(path);

    // Create the parent directories if they don't exist.
    if let Err(e) = fs::create_dir_all(&path)) {
        eprintln!("Failed to create directory: {}", e));
        return;
    }

    println!("Directory created successfully at path: {:?}", path);
}

fn main() {
    let path = "./path/to/dir";
    create_directory(path);
}