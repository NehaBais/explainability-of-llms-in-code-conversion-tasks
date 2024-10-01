use std::fs;
use std::path::Path;

fn check_file_and_directory() {
    let current_dir = fs::canonicalize(".").expect("Cannot get current directory");
    let root_dir = Path::new("/");

    // Check for the file and directory in the current working directory.
    let input_file_path = current_dir.join("docs").join("input.txt");
    let docs_directory_path = current_dir.join("docs");

    if input_file_path.exists() && input_file_path.is_file() {
        println!("The file 'input.txt' exists in the current working directory.");
    } else {
        println!("The file 'input.txt' does not exist in the current working directory.");
    }

    if docs_directory_path.exists() && docs_directory_path.is_dir() {
        println!("The directory 'docs' exists in the current working directory.");
    } else {
        println!("The directory 'docs' does not exist in the current working directory.");
    }

    // Check for the file and directory in the filesystem root.
    let input_file_root_path = root_dir.join("docs").join("input.txt");
    let docs_directory_root_path = root_dir.join("docs");

    if input_file_root_path.exists() && input_file_root_path.is_file() {
        println!("The file 'input.txt' exists in the filesystem root.");
    } else {
        println!("The file 'input.txt' does not exist in the filesystem root.");
    }

    if docs_directory_root_path.exists() && docs_directory_root_path.is_dir() {
        println!("The directory 'docs' exists in the filesystem root.");
    } else {
        println!("The directory 'docs' does not exist in the filesystem root.");
    }
}

fn main() {
    check_file_and_directory();
}
