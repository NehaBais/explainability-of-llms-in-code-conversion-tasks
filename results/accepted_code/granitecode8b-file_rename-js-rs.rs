use std::fs;
fn main() {
    // Rename file in current working directory
    fs::rename("input.txt", "output.txt").unwrap();
    // Rename file in root directory
    fs::rename("/c:/input.txt", "/c:/output.txt").unwrap();
    // Rename directory in current working directory
    fs::rename("docs", "mydocs").unwrap();
    // Rename directory in root directory
    fs::rename("/c:/docs", "/c:/mydocs").unwrap();
}
