use std::fs;
use std::io::Result;

fn create(directory: &str) -> Result<()> {
    fs::File::create(format!("{}/output.txt", directory))?;
    fs::DirBuilder::new().build(format!("{}/docs", directory))?;
    Ok(())
}

fn main() -> Result<()> {
    create(".")?; // current directory

    /* The root directory is not universally supported on all systems due to security reasons.
    Thus, it's recommended to avoid using the root directory in general use cases and handle this edge case manually */

    Ok(())
}
