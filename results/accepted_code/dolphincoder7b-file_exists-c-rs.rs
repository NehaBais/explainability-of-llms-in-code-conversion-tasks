use std::fs;
use std::path::{Path, PathBuf};

fn main() {
    let cwd = Path::new(".");

    // Check if input.txt exists and is a regular file
    let input_file_path = cwd.join("input.txt");
    match fs::metadata(&input_file_path) {
        Ok(meta) => println!(
            "{:?} is a regular file? {}",
            &input_file_path,
            meta.is_file()
        ),
        Err(_) => eprintln!("File does not exist or could not be opened"),
    };

    // Check if docs exists and is a directory
    let dir_path = cwd.join("docs");
    match fs::metadata(&dir_path) {
        Ok(meta) => println!("{:?} is a directory? {}", &dir_path, meta.is_dir()),
        Err(_) => eprintln!("Directory does not exist or could not be opened"),
    };

    // Check if /input.txt exists and is a regular file
    let absolute_input_file_path = PathBuf::from("/").join("input.txt");
    match fs::metadata(&absolute_input_file_path) {
        Ok(meta) => println!(
            "{:?} is a regular file? {}",
            &absolute_input_file_path,
            meta.is_file()
        ),
        Err(_) => eprintln!("File does not exist or could not be opened"),
    };

    // Check if /docs exists and is a directory
    let absolute_dir_path = PathBuf::from("/").join("docs");
    match fs::metadata(&absolute_dir_path) {
        Ok(meta) => println!("{:?} is a directory? {}", &absolute_dir_path, meta.is_dir()),
        Err(_) => eprintln!("Directory does not exist or could not be opened"),
    };
}
