use std::fs;
use std::io;

fn main() -> io::Result<()> {
    fs::write("output.txt", "")?;
    fs::create_dir("docs")?;
    fs::create_dir("/docs")?;
    Ok(())
}
