use std::fs;
use std::io;

fn file_size(f: &str) -> io::Result<()> {
    let metadata = fs::metadata(f)?;
    println!("{}", metadata.len());
    Ok(())
}

fn main() -> io::Result<()> {
    file_size("input.txt")?;
    file_size("/input.txt")?;
    Ok(())
}
