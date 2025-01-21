use std::fs;
use std::io;

fn main() -> io::Result<()> {
    // Move file in current working directory
    fs::rename("input.txt", "output.txt")?;
    
    // Move file in filesystem root (assuming the user has permissions)
    fs::rename("c:/input.txt", "c:/output.txt")?;
    
    // Move folder in current working directory
    fs::rename("docs", "mydocs")?;
    
    // Move folder in filesystem root (assuming the user has permissions)
    fs::rename("c:/docs", "c:/mydocs")?;

    Ok(())
}