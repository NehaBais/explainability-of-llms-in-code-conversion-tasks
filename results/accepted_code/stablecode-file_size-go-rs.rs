use std::fs;
use std::path::PathBuf;

fn print_file_size(f: &str) {
    if let Ok(metadata) = fs::metadata(f) {
        println!("{}", metadata.len());
    } else {
        println!("Couldn't read {}", f);
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
