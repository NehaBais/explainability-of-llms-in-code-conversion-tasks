use std::fs;

fn main() {
    // Rename local files in the current directory and root directory
    fs::rename("input.txt", "output.txt").unwrap();
    fs::rename("docs", "mydocs").unwrap();

    // Rename files in the root directory
    fs::rename("/input.txt", "/output.txt").unwrap();
    fs::rename("/docs", "/mydocs").unwrap();
}