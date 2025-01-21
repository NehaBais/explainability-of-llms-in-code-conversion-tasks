use std::fs;

fn main() {
    // Rename file in current working directory
    fs::rename("input.txt", "output.txt").expect("Failed to rename input.txt to output.txt");
    
    // Rename directory in current working directory
    fs::rename("docs", "mydocs").expect("Failed to rename docs to mydocs");
    
    // Rename file in filesystem root
    fs::rename("/input.txt", "/output.txt").expect("Failed to rename /input.txt to /output.txt");
    
    // Rename directory in filesystem root
    fs::rename("/docs", "/mydocs").expect("Failed to rename /docs to /mydocs");
}