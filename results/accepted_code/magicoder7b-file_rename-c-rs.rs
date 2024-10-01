use std::fs;
use std::path::Path;

fn main() {
    fs::rename("input.txt", "output.txt").expect("Could not rename file");
    fs::rename("docs", "mydocs").expect("Could not rename directory");

    let root = Path::new("/"); // This is the filesystem root
    fs::rename(root.join("input.txt"), root.join("output.txt"))
        .expect("Could not rename file in root");
    fs::rename(root.join("docs"), root.join("mydocs")).expect("Could not rename directory in root");
}
