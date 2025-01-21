use std::fs;
use std::path::Path;

fn main() {
    let current_dir = Path::new(".");

    if !current_dir.join("input.txt").is_file() {
        println!("File input.txt does not exist in the current directory.");
    }

    if !fs::metadata("/input.txt").is_ok() {
        println!("File /input.txt does not exist in the filesystem root.");
    }

    if !current_dir.join("docs").is_dir() {
        println!("Directory docs does not exist in the current directory.");
    }

    if !fs::metadata("/docs").is_ok() {
        println!("Directory /docs does not exist in the filesystem root.");
    }
}
