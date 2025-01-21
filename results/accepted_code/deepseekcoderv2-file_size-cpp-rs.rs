use std::fs;
use std::io;

fn print_file_size(filename: &str) {
    match fs::metadata(filename) {
        Ok(meta) => {
            let size = meta.len();
            println!("Size of file {} is {} bytes.", filename, size);
        }
        Err(e) => {
            eprintln!("Error: {}", e);
        }
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}