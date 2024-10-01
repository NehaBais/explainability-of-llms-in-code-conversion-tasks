use std::fs;
use std::io;

fn print_file_size(filename: &str) -> Result<(), io::Error> {
    let stat = fs::metadata(filename)?;
    println!("{}", stat.len());
    Ok(())
}

fn main() -> Result<(), io::Error> {
    print_file_size("input.txt")?;
    print_file_size("/input.txt")?;
    Ok(())
}
