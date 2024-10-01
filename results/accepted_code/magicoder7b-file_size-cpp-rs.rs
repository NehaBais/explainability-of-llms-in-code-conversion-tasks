use std::fs;
use std::io::Error;

fn print_file_size(filename: &str) {
    match fs::metadata(filename) {
        Ok(meta) => {
            if meta.is_file() {
                let size = meta.len();
                println!("Size of file {} is {} bytes.", filename, size);
            } else {
                println!("{} is not a regular file", filename);
            }
        }
        Err(e) => eprintln!("Error: {}", e),
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
