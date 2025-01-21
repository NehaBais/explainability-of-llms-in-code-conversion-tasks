use std::fs::{File, DirBuilder};
use std::io;
use std::path::Path;

fn main() -> io::Result<()> {
    create_file_and_directory("output.txt", "docs")?;
    create_file_and_directory("/root/output.txt", "/root/docs")?;

    Ok(())
}

fn create_file_and_directory(file_path: &str, dir_path: &str) -> io::Result<()> {
    let file_path = Path::new(file_path);
    File::create(file_path)?;
    
    let dir_path = Path::new(dir_path);
    DirBuilder::new().mode(0o750).recursive(false).create(dir_path)?;

    Ok(())
}