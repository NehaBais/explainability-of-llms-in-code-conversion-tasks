use std::fs;
use std::io::Error;

fn main() {
    let path = "./path/to/dir";

    match create_dir_all(path) {
        Ok(_) => println!("Directory {} created successfully", path),
        Err(error) => eprintln!("Failed to create directory: {}", error),
    }
}

fn create_dir_all(path: &str) -> Result<(), Error> {
    fs::create_dir_all(path)?;

    Ok(())
}
