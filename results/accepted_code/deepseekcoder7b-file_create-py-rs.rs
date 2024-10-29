use std::fs;
use std::io::Result;

fn create(directory: &str) -> Result<()> {
    // Creating file "output.txt" in the given directory
    fs::File::create(format!("{}/output.txt", directory))?;

    // Creating a new directory named "docs" in the given directory
    fs::DirBuilder::new()?.set_permisions(0o755)?;
    Ok(())
}

fn main() -> Result<()> {
    create(".")?; // current directory
    create("/")?; // root directory (not advisable, as it might not work on all systems)
    Ok(())
}
