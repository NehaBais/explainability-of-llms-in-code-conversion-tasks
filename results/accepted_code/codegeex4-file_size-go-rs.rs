use std::fs;
use std::io;

fn print_file_size(file_path: &str) -> io::Result<()> {
    match fs::metadata(file_path).and_then(|metadata| metadata.len()) {
        Ok(size) => println!("{}", size),
        Err(err) => eprintln!("Error: {}", err),
    }
    Ok(())
}

fn main() -> io::Result<()> {
    print_file_size("input.txt")?;
    print_file_size("/input.txt")?;

    Ok(())
}
