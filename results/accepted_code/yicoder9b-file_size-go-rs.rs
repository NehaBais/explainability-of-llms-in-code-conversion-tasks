use std::fs::metadata;
use std::path::Path;

fn print_file_size(f: &str) {
    if let Ok(meta) = metadata(&Path::new(f)) {
        println!("{}", meta.len());
    } else {
        eprintln!("Failed to get file info for {}", f);
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
