use std::fs;
use std::path::Path;

fn main() {
    // Rename within the current working directory
    fs::rename("input.txt", "output.txt").expect("Failed to rename file in current directory");
    fs::rename("docs", "mydocs").expect("Failed to rename directory in current directory");

    // Rename within the filesystem root (assuming administrative privileges)
    if let Some(root) = Path::new("/").read_link().ok() {
        let root_str = root.to_string_lossy();
        fs::rename(&format!("{}/input.txt", root_str), &format!("{}/output.txt", root_str)).expect("Failed to rename file in filesystem root");
        fs::rename(&format!("{}/docs", root_str), &format!("{}/mydocs", root_str)).expect("Failed to rename directory in filesystem root");
    } else {
        eprintln!("Failed to determine the filesystem root");
    }
}