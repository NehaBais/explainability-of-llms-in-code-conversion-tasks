use std::fs;
use std::io;
use std::path::Path;

fn print_file_size(filename: &str) {
    let path = Path::new(filename);

    match fs::metadata(path) {
        Ok(meta) => {
            println!(
                "Size of file {} is {} bytes.",
                filename, meta.len()
            );
        }
        Err(e) => {
            eprintln!("Error accessing file: {}", e));
        }
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}