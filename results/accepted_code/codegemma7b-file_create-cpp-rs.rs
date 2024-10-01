use std::fs;
use std::path::PathBuf;

fn main() {
    // Create an empty file in the current working directory
    let current_dir = std::env::current_dir().unwrap();
    fs::File::create(current_dir.join("output.txt")).unwrap();

    // Create an empty file in the filesystem root
    let root_dir = PathBuf::from("/");
    fs::File::create(root_dir.join("output.txt")).unwrap();

    // Create an empty directory in the current working directory
    fs::create_dir("docs").unwrap();

    // Create an empty directory in the filesystem root
    fs::create_dir("/docs").unwrap();
}
