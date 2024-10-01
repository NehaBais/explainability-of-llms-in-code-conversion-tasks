use std::fs;
use std::path::Path;

fn rename_files_and_dirs() {
    let current_dir = env!("CARGO_MANIFEST_DIR");
    let root_path = Path::new("/");

    // Rename in the current working directory
    fs::rename("input.txt", "output.txt").expect("Failed to rename file");
    fs::rename("docs", "mydocs").expect("Failed to rename dir");

    // Rename in the filesystem root
    fs::rename(root_path.join("input.txt"), root_path.join("output.txt"))
        .expect("Failed to rename file in root");
    fs::rename(root_path.join("docs"), root_path.join("mydocs"))
        .expect("Failed to rename dir in root");
}

fn main() {
    rename_files_and_dirs();
}
