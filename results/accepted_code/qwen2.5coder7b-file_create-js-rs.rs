use std::fs;
use std::io;

fn main() -> io::Result<()> {
    // Create an empty file called "output.txt" in the current working directory
    fs::write("output.txt", "")?;
    
    // Create an empty file called "/output.txt" in the filesystem root
    fs::write("/output.txt", "")?;

    // Create an empty directory called "docs" in the current working directory
    fs::create_dir("docs")?;
    
    // Create an empty directory called "/docs" in the filesystem root
    fs::create_dir("/docs")?;

    Ok(())
}