use std::fs;

fn main() {
    // Rename input.txt to output.txt in the current working directory
    fs::rename("input.txt", "output.txt").expect("Failed to rename file");
    
    // Rename docs to mydocs in the current working directory
    fs::rename("docs", "mydocs").expect("Failed to rename directory");
    
    // Rename /input.txt to /output.txt in the filesystem root (assuming a Unix-like system)
    fs::rename("/input.txt", "/output.txt").expect("Failed to rename file");
    
    // Rename /docs to /mydocs in the filesystem root (assuming a Unix-like system)
    fs::rename("/docs", "/mydocs").expect("Failed to rename directory");
}