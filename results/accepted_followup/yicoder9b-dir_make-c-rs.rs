use std::{error::Error, fs};

pub fn make_directory(path: &str) -> Result<(), Box<dyn Error>> {
    fs::create_dir_all(path)?;
    Ok(())
}

fn main() {
    let path = "./path/to/dir"; // Replace this with your directory
    match make_directory(path) {
        Ok(_) => println!("Directory created successfully: {}", path),
        Err(error) => eprintln!("Failed to create directory: {} - Error: {:?}", path, error),
    }
}