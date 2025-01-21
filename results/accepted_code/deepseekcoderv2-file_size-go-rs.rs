use std::fs;
use std::io;

fn print_file_size(path: &str) {
    match fs::metadata(path) {
        Ok(meta) => println!("{}", meta.len()),
        Err(e) => eprintln!("Error: {}", e),
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}