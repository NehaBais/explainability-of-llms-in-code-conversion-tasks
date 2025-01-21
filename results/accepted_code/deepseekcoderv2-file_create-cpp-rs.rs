use std::fs;
use std::io;

fn main() -> io::Result<()> {
    // Create a new empty file called "output.txt" of size 0 bytes in the current working directory
    let mut f = fs::File::create("output.txt")?;
    drop(f); // Close the file

    // Create a new empty file called "/output.txt" of size 0 bytes in the filesystem root
    let mut f = fs::File::create("/output.txt")?;
    drop(f); // Close the file

    // Create an empty directory called "docs" in the current working directory
    fs::create_dir("docs")?;

    // Create an empty directory called "/docs" in the filesystem root
    fs::create_dir("/docs")?;

    Ok(())
}