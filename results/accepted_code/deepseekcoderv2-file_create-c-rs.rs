use std::fs;
use std::io;

fn main() -> io::Result<()> {
    // Create a new empty file called "output.txt" of size 0 bytes in the current working directory
    fs::write("output.txt", &[])?;

    // Create an empty directory called "docs" in the current working directory
    fs::create_dir("docs")?;

    Ok(())
}