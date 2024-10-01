use std::fs;
use std::io;
use std::env;

fn create(directory: &str) -> io::Result<()> {
    fs::File::create(format!("{}/output.txt", directory))?;
    fs::create_dir_all(format!("{}/docs", directory))?;
    Ok(())
}

fn main() -> io::Result<()> {
    let current_directory = env::current_dir()?;

    create(&current_directory)?;  // current directory
    create("/")?  // root directory

    Ok(())
}