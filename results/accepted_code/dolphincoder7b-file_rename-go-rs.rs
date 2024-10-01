use std::env;
use std::fs;

fn main() {
    let path = env::current_dir().unwrap();

    // In the current working directory
    fs::rename("input.txt", "output.txt").expect("Failed to rename file");
    fs::rename("docs", "mydocs").expect("Failed to rename directory");

    // At root of filesystem
    fs::rename(&path.join("input.txt"), &path.join("output.txt"))
        .expect("Failed to rename file at root");
    fs::rename(&path.join("docs"), &path.join("mydocs"))
        .expect("Failed to rename directory at root");
}
