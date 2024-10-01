use std::fs;

fn main() {
    // Rename in current working directory
    fs::rename("input.txt", "output.txt").unwrap();
    fs::rename("docs", "mydocs").unwrap();

    // Rename in filesystem root
    fs::rename("/input.txt", "/output.txt").unwrap();
    fs::rename("/docs", "/mydocs").unwrap();
}
