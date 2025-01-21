use std::fs;
use std::io;

fn main() -> io::Result<()> {
    // Create "output.txt" in the current working directory
    fs::File::create("output.txt")?;
    
    // Create "output.txt" in the filesystem root (assuming Unix-like path)
    fs::File::create("/output.txt")?;
    
    // Create "docs" directory in the current working directory
    fs::DirBuilder::new().create("docs")?;
    
    // Create "docs" directory in the filesystem root (assuming Unix-like path)
    fs::DirBuilder::new().create("/docs")?;
    
    Ok(())
}