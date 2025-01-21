#![crate_name = "file_create_cpp_rs"]

use std::fs;
use std::path::Path;

fn main() {
    let current_path = Path::new("./");
    let root_path = Path::new("/");

    create_file_and_directory(&current_path);
    create_file_and_directory(&root_path);
}

fn create_file_and_directory(path: &Path) {
    // Create an empty file
    if fs::File::create(path.join("output.txt")).is_err() {
        eprintln!("Failed to create 'output.txt' in {:?}", path);
    }

    // Create a directory named "docs"
    if fs::create_dir(path.join("docs")).is_err() {
        eprintln!("Failed to create 'docs' in {:?}", path);
    }
}
