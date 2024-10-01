use std::fs::File;
use std::io::Error;
use std::path::Path;

fn print_file_size(filename: &str) -> Result<(), Error> {
    let file = File::open(filename);
    match file {
        Ok(mut file) => {
            let size = file.metadata()?.len();
            println!("Size of file {} is {} bytes.", filename, size);
            Ok(())
        }
        Err(error) => Err(error),
    }
}

fn main() {
    if let Err(e) = print_file_size("input.txt") {
        eprintln!("{}", e);
    };
    if let Err(e) = print_file_size("/input.txt") {
        eprintln!("{}", e);
    }
}
