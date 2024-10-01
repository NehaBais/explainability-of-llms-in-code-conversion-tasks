use std::fs;
fn main() -> std::io::Result<()> {
    fs::rename("input.txt", "output.txt")?;
    fs::rename("docs", "mydocs")?;
    fs::rename("/", "/")?; // This is a no-op, but included to demonstrate the ability to rename the root directory
    Ok(())
}
