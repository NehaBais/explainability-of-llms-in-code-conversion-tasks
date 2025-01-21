use std::fs;
use std::path::Path;

fn main() {
    let path = Path::new("C:/parent/test");
    match fs::create_dir_all(&path) {
        Ok(_) => println!("path successfully created"),
        Err(e) => eprintln!("Error creating directory: {}", e),
    }
}