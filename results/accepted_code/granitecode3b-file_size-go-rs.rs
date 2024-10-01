use std::fs;
use std::io;
fn print_file_size(path: &str) -> io::Result<()> {
    let metadata = fs::metadata(path)?;
    println!("Size of {} is {}", path, metadata.len());
    Ok(())
}
fn main() -> io::Result<()> {
    print_file_size("input.txt")?;
    print_file_size("/")?;
    Ok(())
}
