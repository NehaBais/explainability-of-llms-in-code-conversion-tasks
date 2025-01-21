use std::fs::File;
use std::io::Error;

fn main() -> Result<(), Error> {
    File::create("output.txt")?;
    File::create(format!("{}{}", File::separator(), "output.txt"))?;
    DirBuilder::new().recursive(true).create("docs")?;
    DirBuilder::new()
        .recursive(true)
        .create(format!("{}{}", File::separator(), "docs"))?;
    Ok(())
}
