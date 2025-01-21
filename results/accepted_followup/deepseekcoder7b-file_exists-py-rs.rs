use std::fs;
use std::path::Path;

fn check_file_exists(filename: &str) -> bool {
    let path = Path::new(filename);
    return match path.exists() && path.is_file() { 
        true => true, 
        false => false};
}

fn check_directory_exists(dirname: &str) -> bool {
    let path = Path::new(dirname);
    return match path.exists() && path.is_dir() {
        true => true, 
        false => false};
}
// for current working directory
assert!(check_file_exists("input.txt"));
assert!(check_directory_exists("docs"));

// for file and a directory in the filesystem root ("/" as Unix convention)
if check_file_exists("/input.txt") {println!("File exists.")} else {println!("File does not exist.")};
if check_directory_exists("/docs") {println!("Directory exists.")} else {println!("Directory does not exist.")};