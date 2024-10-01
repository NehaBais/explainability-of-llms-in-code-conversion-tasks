use std::fs;
use std::io;
fn main() -> io::Result<()> {
    fs::write("output.txt", b"")?;
    fs::create_dir("docs")?;
    Ok(())
}
