use std::fs;
use std::io;

fn create_file(filename: &str) -> io::Result<()> {
    fs::write(filename, b"")?;
    println!("file {} created!", filename);
    Ok(())
}

fn create_dir(dirname: &str) -> io::Result<()> {
    fs::create_dir(dirname)?;
    println!("directory {} created!", dirname);
    Ok(())
}

fn main() -> io::Result<()> {
    // Create file in the current working directory
    create_file("input.txt")?;
    
    // Create file in the filesystem root (requires superuser privileges)
    if let Err(_) = create_file("/input.txt") {
        eprintln!("Failed to create file in root directory");
    } else {
        println!("file /input.txt created!");
    }
    
    // Create directory in the current working directory
    create_dir("docs")?;
    
    // Create directory in the filesystem root (requires superuser privileges)
    if let Err(_) = create_dir("/docs") {
        eprintln!("Failed to create directory in root directory");
    } else {
        println!("directory /docs created!");
    }
    
    Ok(())
}