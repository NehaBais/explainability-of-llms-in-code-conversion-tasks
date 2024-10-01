use std::fs;

fn main() {
    // Rename a file within the current working directory
    fs::rename("input.txt", "output.txt").expect("Failed to rename file");

    // Rename a directory within the current working directory
    fs::rename("docs", "mydocs").expect("Failed to rename directory");

    // Rename a file in the filesystem root (assuming you have permission)
    fs::rename("/input.txt", "/output.txt").expect("Failed to rename file in the root directory");

    // Rename a directory in the filesystem root (assuming you have permission)
    fs::rename("/docs", "/mydocs").expect("Failed to rename directory in the root directory");
}
