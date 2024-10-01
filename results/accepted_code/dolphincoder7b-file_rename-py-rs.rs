use std::fs;

fn main() {
    fs::rename("input.txt", "output.txt").expect("Failed to rename file");
    fs::rename("docs", "mydocs").expect("Failed to rename directory");

    let current_dir = std::env::current_dir().unwrap();
    fs::rename(
        current_dir.join("input.txt"),
        current_dir.join("output.txt"),
    )
    .expect("Failed to rename file in the current working directory");
    fs::rename(current_dir.join("docs"), current_dir.join("mydocs"))
        .expect("Failed to rename directory in the current working directory");
}
