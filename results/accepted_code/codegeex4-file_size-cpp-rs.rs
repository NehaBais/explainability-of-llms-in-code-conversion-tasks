use std::fs;
use std::io;

fn print_file_size(filename: &str) -> io::Result<()> {
    match fs::metadata(&filename).and_then(|m| m.len()) {
        Ok(size) => println!("Size of file {} is {} bytes.", filename, size),
        Err(e) => eprintln!("Error occurred: {}", e),
    }
    Ok(())
}

fn main() -> io::Result<()> {
    print_file_size("input.txt");
    print_file_size("/input.txt");
    Ok(())
}
