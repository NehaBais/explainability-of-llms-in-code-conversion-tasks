use std::fs;
use std::io;
fn main() -> io::Result<()> {
    fs::rename("input.txt", "output.txt")?;
    fs::rename("docs", "mydocs")?; // Add an extra argument to the second call of `fs::rename`.
    fs::rename("/input.txt", "/output.txt")?;
    fs::rename("/docs", "/mydocs")?;
    Ok(())
}
