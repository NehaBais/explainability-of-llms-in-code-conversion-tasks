use std::fs;
use std::io;
fn main() -> io::Result<()> {
    let path = "./path/to/dir";

    fs::create_dir_all(path)?;

    println!("Directory created successfully");

    Ok(())
}
