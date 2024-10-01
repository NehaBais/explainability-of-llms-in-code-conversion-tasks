use std::fs;
use std::io::Error;

fn print_file_size(filename: &str) -> Result<(), Error> {
    let size = fs::metadata(filename)?.len();
    println!("Size of file {} is {} bytes.", filename, size);
    Ok(())
}

fn main() {
    print_file_size("input.txt").unwrap();
    print_file_size("/input.txt").unwrap();
}
