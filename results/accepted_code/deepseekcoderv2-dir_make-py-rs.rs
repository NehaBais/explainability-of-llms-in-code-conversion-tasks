use std::fs;
use std::io;
use std::path::Path;

fn mkdirp(path: &str) -> io::Result<()> {
    fs::create_dir_all(path)?;
    Ok(())
}

fn main() {
    let path = "./path/to/dir";
    match mkdirp(path) {
        Ok(_) => println!("Directory created successfully."),
        Err(e) => eprintln!("Error creating directory: {}", e),
    }
}