use std::fs;
use std::path::Path;

fn main() {
    // Check for input.txt in the current working directory
    let current_dir = std::env::current_dir().unwrap();
    let file_path_current = current_dir.join("input.txt");
    let dir_path_current = current_dir.join("docs");

    // Check for input.txt in the filesystem root
    let file_path_root = Path::new("/input.txt");
    let dir_path_root = Path::new("/docs");

    // Function to check if a path exists and is a file or directory
    fn check_existence(path: &Path) -> bool {
        path.exists() && (path.is_file() || path.is_dir())
    }

    println!("Checking for input.txt in the current working directory:");
    if check_existence(&file_path_current) {
        println!("File 'input.txt' exists in the current working directory.");
    } else {
        println!("File 'input.txt' does not exist in the current working directory.");
    }

    if check_existence(&dir_path_current) {
        println!("Directory 'docs' exists in the current working directory.");
    } else {
        println!("Directory 'docs' does not exist in the current working directory.");
    }

    println!("\nChecking for input.txt in the filesystem root:");
    if check_existence(&file_path_root) {
        println!("File 'input.txt' exists in the filesystem root.");
    } else {
        println!("File 'input.txt' does not exist in the filesystem root.");
    }

    if check_existence(&dir_path_root) {
        println!("Directory 'docs' exists in the filesystem root.");
    } else {
        println!("Directory 'docs' does not exist in the filesystem root.");
    }
}