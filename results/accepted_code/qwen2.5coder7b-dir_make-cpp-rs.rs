use std::fs;
use std::path::Path;

fn create_directory(path_str: &str) -> Result<(), Box<dyn std::error::Error>> {
    let path = Path::new(path_str);

    if path.exists() {
        return Ok(());
    }

    fs::create_dir_all(path)?;
    
    Ok(())
}

fn main() -> Result<(), Box<dyn std::error::Error>> {
    if std::env::args().len() != 2 {
        eprintln!("usage: mkdir <path>");
        return Err("Invalid number of arguments".into());
    }

    let path_to_create = &std::env::args().nth(1).unwrap();

    create_directory(path_to_create)?;

    Ok(())
}