use std::fs;

fn main() {
    let cwd = std::env::current_dir().unwrap();

    // Current working directory
    fs::rename(cwd.join("input.txt"), cwd.join("output.txt")).expect("Unable to rename input.txt");
    fs::rename(cwd.join("docs"), cwd.join("mydocs")).expect("Unable to rename docs");

    // Root directory
    let root = std::path::Path::new("/");
    fs::rename(root.join("input.txt"), root.join("output.txt"))
        .expect("Unable to rename input.txt in the root");
    fs::rename(root.join("docs"), root.join("mydocs")).expect("Unable to rename docs in the root");
}
