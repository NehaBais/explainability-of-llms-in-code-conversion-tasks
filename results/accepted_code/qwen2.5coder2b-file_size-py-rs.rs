use std::fs;
use std::path::Path;

fn main() {
    // Verify the size of a file called input.txt for a file in the current working directory
    let current_dir_path = Path::new("input.txt");
    match fs::metadata(current_dir_path) {
        Ok(metadata) => println!("The size of 'input.txt' is: {}", metadata.len()),
        Err(e) => eprintln!("Error reading metadata for 'input.txt': {}", e),
    }

    // Verify the size of a file called input.txt for the file system root
    let root_dir_path = Path::new("/input.txt");
    match fs::metadata(root_dir_path) {
        Ok(metadata) => println!("The size of '/input.txt' is: {}", metadata.len()),
        Err(e) => eprintln!("Error reading metadata for '/input.txt': {}", e),
    }
}