use std::fs;
use std::io;
use std::path::Path;

fn mkdir_all(path: &str) -> io::Result<()> {
    fs::create_dir_all(path)
}

fn main() -> io::Result<()> {
    let path = "./tmp/some/path/to/dir";
    match mkdir_all(path) {
        Ok(_) => println!("Directory created successfully."),
        Err(e) => eprintln!("Failed to create directory: {}", e),
    }
    Ok(())
}