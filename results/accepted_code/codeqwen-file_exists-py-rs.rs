use std::fs;

fn main() {
    if let Ok(metadata) = fs::metadata("input.txt") {
        if metadata.is_file() {
            println!("File 'input.txt' exists in the current working directory.");
        } else if let Err(_) = fs::metadata("/input.txt") {
            println!("File '/input.txt' does not exist in the root directory.");
        }
    }

    if let Ok(metadata) = fs::metadata("docs") {
        if metadata.is_dir() {
            println!("Directory 'docs' exists in the current working directory.");
        } else if let Err(_) = fs::metadata("/docs") {
            println!("Directory '/docs' does not exist in the root directory.");
        }
    }
}
