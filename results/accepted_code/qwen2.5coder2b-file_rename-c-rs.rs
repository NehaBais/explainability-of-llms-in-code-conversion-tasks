use std::fs;

fn main() {
    // Rename in current directory
    fs::rename("input.txt", "output.txt");
    fs::rename("docs", "mydocs");

    // Rename in root directory
    fs::rename("/input.txt", "/output.txt");
    fs::rename("/docs", "/mydocs");
}