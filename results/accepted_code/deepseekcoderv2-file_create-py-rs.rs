use std::fs;
use std::io;

fn main() -> io::Result<()> {
    // Create in the current working directory
    create(".");
    
    // Create in the root directory
    create("/");
    
    Ok(())
}

fn create(directory: &str) -> io::Result<()> {
    let path = format!("{}/output.txt", directory);
    fs::File::create(&path)?;
    fs::create_dir(format!("{}/docs", directory))?;
    Ok(())
}