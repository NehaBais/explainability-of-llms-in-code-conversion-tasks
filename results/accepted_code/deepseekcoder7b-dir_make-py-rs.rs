use std::fs;
use std::path::Path;

fn mkdirp(path: &str) -> Result<(), std::io::Error> {
    let _ = fs::create_dir_all(path)?;
    Ok(())
}

fn main() {
    match mkdirp("./test/nested/directory") {
        Ok(_) => println!("Directory created successfully"),
        Err(e) => eprintln!("Failed to create directory: {}", e),
    }
}
