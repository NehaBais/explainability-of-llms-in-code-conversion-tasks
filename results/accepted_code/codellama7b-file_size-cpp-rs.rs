use std::fs;

fn print_file_size(filename: &str) {
    match fs::metadata(filename).map(|meta| meta.len()).ok() {
        Some(size) => println!("Size of file {} is {} bytes.", filename, size),
        None => eprintln!("Failed to get metadata for {}.", filename),
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
