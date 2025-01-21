use std::fs;

fn main() {
    // Rename in the current working directory
    fs::rename("input.txt", "output.txt").expect("Failed to rename input.txt to output.txt");
    fs::rename("docs", "mydocs").expect("Failed to rename docs to mydocs");
    
    // Rename at the filesystem root
    fs::rename("/input.txt", "/output.txt").expect("Failed to rename /input.txt to /output.txt");
    fs::rename("/docs", "/mydocs").expect("Failed to rename /docs to /mydocs");
}