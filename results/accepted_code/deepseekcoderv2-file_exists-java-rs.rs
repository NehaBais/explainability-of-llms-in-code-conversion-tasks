use std::fs;
use std::path::Path;

fn main() {
    // Check for the file and directory in the current working directory
    check_file_and_directory("input.txt", "docs");
    
    // Check for the file and directory in the filesystem root
    check_file_and_directory("/docs/input.txt", "/docs");
}

fn check_file_and_directory(file_name: &str, dir_name: &str) {
    let path = Path::new(dir_name).join(file_name);
    
    if fs::metadata(path).is_ok() {
        println!("The file or directory {} exists.", path.display());
    } else {
        println!("The file or directory {} does not exist.", path.display());
    }
}