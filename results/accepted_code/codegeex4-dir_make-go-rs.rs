use std::fs;
use std::path::Path;

fn create_directory(path: &str) -> Result<(), std::io::Error> {
    let path = Path::new(path);
    if !path.exists() || !path.is_dir() {
        fs::create_dir_all(path)?;
    }
    Ok(())
}

fn main() {
    match create_directory("/tmp/some/path/to/dir") {
        Ok(_) => println!("Directory created successfully"),
        Err(e) => eprintln!("Error creating directory: {}", e),
    }
}
