use std::fs;
use std::path::PathBuf;

fn create_directory(path: &str) -> Result<(), String> {
    let pathbuf = PathBuf::from(path);

    if pathbuf.exists() {
        Ok(())
    } else {
        fs::create_dir_all(&pathbuf).map_err(|e| e.to_string())
    }
}

fn main() {
    match create_directory("C:/parent/test") {
        Ok(_) => println!("path successfully created"),
        Err(e) => eprintln!("{}", e),
    }
}
