use std::fs;
use std::io;

fn print_file_size(filename: &str) {
    match fs::metadata(filename) {
        Ok(metadata) => {
            let size = metadata.len();
            println!("Size of file {} is {} bytes.", filename, size);
        },
        Err(err) => eprintln!("{}", err),
    }
}

fn main() -> io::Result<()> {
    print_file_size("input.txt")?;
    print_file_size("/input.txt")?;
    Ok(())
}