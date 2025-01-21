use std::fs;
use std::path::Path;

fn main() {
    // Check for file and directory existence in the current working directory
    check_file_and_directory("input.txt", "docs");

    // Check for file and directory existence in the filesystem root (e.g., c:/)
    check_file_and_directory("c:/input.txt", "c:/docs");
}

fn check_file_and_directory<P: AsRef<Path>>(file_path: P, dir_path: P) {
    // Check if the file exists
    let file_exists = fs::metadata(file_path).is_ok();
    
    // Check if the directory exists
    let dir_exists = fs::metadata(dir_path).map(|meta| meta.is_dir()).unwrap_or(false);
    
    println!("File {} exists: {}", file_path.as_ref().display(), file_exists);
    println!("Directory {} exists: {}", dir_path.as_ref().display(), dir_exists);
}