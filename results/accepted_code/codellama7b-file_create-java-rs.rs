use std::fs;
use std::io::Error;

fn main() -> Result<(), Error> {
    fs::File::create("output.txt")?;
    fs::File::create(format!("{}{}", File::separator(), "output.txt"))?;
    fs::DirBuilder::new().recursive(true).create("docs")?;
    fs::DirBuilder::new()
        .recursive(true)
        .create(format!("{}{}", File::separator(), "docs"))?;
    Ok(())
}
