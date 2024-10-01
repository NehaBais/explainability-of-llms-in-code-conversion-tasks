use std::fs;

fn main() {
    fs::rename("input.txt", "output.txt");
    fs::rename("docs", "mydocs");
    fs::rename("/input.txt", "/output.txt");
    fs::rename("/docs", "/mydocs");
}
