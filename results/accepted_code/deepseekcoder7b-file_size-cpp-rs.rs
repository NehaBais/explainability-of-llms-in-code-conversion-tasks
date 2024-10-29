use std::fs;
use std::io::Error;

fn print_file_size(filename: &str) {
    match fs::metadata(filename) {
        Ok(meta) if meta.is_file() => {
            println!("Size of file {} is {} bytes.", filename, meta.len())
        }
        Ok(_) => eprintln!("{} is not a regular file", filename),
        Err(error) => eprintln!(
            "Couldn'<｜begin▁of▁sentence｜>t get file size {}: {}",
            filename, error
        ),
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
