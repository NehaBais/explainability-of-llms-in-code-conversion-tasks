use std::fs;

fn create_directory(path: &str) -> Result<(), std::io::Error> {
    fs::create_dir_all(path)?;
    Ok(())
}

fn main() {
    let path = "./path/to/dir";
    if let Err(e) = create_directory(path) {
        eprintln!("Failed to create directory: {}", e);
    } else {
        println!("Successfully created directory");
    }
}
