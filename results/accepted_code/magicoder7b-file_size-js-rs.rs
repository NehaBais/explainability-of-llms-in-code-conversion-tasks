use std::fs;
use std::path::Path;

fn main() {
    let path = Path::new("input.txt");
    let path_root = Path::new("/").join("input.txt"); // join "/" and "input.txt"

    match (fs::metadata(path), fs::metadata(path_root)) {
        (Ok(meta1), Ok(meta2)) => {
            println!("Size of file in current directory: {} bytes", meta1.len());
            println!("Size of file at root: {} bytes", meta2.len());
        }
        _ => {
            eprintln!("An error occurred while reading files metadata");
        }
    }
}
