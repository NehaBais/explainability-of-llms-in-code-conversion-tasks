use std::fs;

fn main() {
    fs::rename("input.txt", "output.txt").expect("Failed to rename input.txt");
    fs::rename("docs", "mydocs").expect("Failed to rename docs");
    fs::rename("/input.txt", "/output.txt").expect("Failed to rename /input.txt");
    fs::rename("/docs", "/mydocs").expect("Failed to rename /docs");
}
