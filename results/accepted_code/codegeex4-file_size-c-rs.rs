use std::fs;
use std::path::Path;

fn main() {
    let file_path = Path::new("input.txt");
    match fs::metadata(file_path) {
        Ok(metadata) => println!("{}", metadata.len()),
        Err(e) => println!("Error: {}", e),
    }

    let root_file_path = Path::new("/input.txt");
    match fs::metadata(root_file_path) {
        Ok(metadata) => println!("{}", metadata.len()),
        Err(e) => println!("Error: {}", e),
    }
}
