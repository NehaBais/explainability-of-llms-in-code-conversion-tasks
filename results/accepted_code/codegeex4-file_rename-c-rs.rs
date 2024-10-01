use std::fs;

fn main() {
    fs::rename("input.txt", "output.txt").expect("Failed to rename file");
    fs::rename("docs", "mydocs").expect("Failed to rename directory");

    let root_dir = "/"; // or &"/".to_string()
    fs::rename(
        root_dir.to_string() + "input.txt",
        root_dir.to_string() + "output.txt",
    )
    .expect("Failed to rename file in root");
    fs::rename(
        root_dir.to_string() + "docs",
        root_dir.to_string() + "mydocs",
    )
    .expect("Failed to rename directory in root");
}
