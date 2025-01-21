use std::fs;

fn main() {
    fs::rename("input.txt", "output.txt").expect("Failed to rename 'input.txt' to 'output.txt'");
    fs::rename("docs", "mydocs").expect("Failed to rename 'docs' to 'mydocs'");
    fs::rename("/input.txt", "/output.txt").expect("Failed to rename '/input.txt' to '/output.txt'");
    fs::rename("/docs", "/mydocs").expect("Failed to rename '/docs' to '/mydocs'");
}