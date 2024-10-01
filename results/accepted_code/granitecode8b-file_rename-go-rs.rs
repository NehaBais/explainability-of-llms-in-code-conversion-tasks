use std::fs;
use std::io;
fn main() -> io::Result<()> {
    fs::rename("input.txt", "output.txt")?;
    fs::rename("docs", "mydocs")?;
    fs::rename("/input.txt", "/output.txt")?;
    fs::rename("/docs", "/mydocs")?;
    Ok(())
}
