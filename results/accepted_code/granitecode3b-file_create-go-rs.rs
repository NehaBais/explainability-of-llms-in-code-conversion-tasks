use std::{fs, io};
fn main() -> io::Result<()> {
    fs::File::create("input.txt")?;
    fs::File::create("/input.txt")?;
    fs::create_dir("docs")?;
    fs::create_dir("/docs")?;
    Ok(())
}
