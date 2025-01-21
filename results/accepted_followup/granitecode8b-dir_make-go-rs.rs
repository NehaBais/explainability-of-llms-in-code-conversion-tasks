use std::fs;
fn mkdir_p(path: &str) -> Result<(), std::io::Error> {
    fs::create_dir_all(path)?;
    Ok(())
}
fn main() {}
