use std::fs;
use std::path::PathBuf;
fn main() {
    let mut path = PathBuf::from("."); // current working directory
                                       // Rename "input.txt" to "output.txt" in the current working directory
    fs::rename(path.join("input.txt"), path.join("output.txt")).unwrap();
    // Rename "docs" to "mydocs" in the current working directory
    fs::rename(path.join("docs"), path.join("mydocs")).unwrap();
    // Rename "input.txt" to "output.txt" in the filesystem root
    path = PathBuf::from("/");
    fs::rename(path.join("input.txt"), path.join("output.txt")).unwrap();
    // Rename "docs" to "mydocs" in the filesystem root
    fs::rename(path.join("docs"), path.join("mydocs")).unwrap();
}
