use std::fs;

fn main() {
    // Rename within current directory
    fs::rename("input.txt", "output.txt").expect("Failed to rename input.txt to output.txt");
    fs::rename("docs", "mydocs").expect("Failed to rename docs to mydocs");

    // Rename in the root directory
    fs::rename("/input.txt", "/output.txt").expect("Failed to rename /input.txt to /output.txt");
    fs::rename("/docs", "/mydocs").expect("Failed to rename /docs to /mydocs");
}
