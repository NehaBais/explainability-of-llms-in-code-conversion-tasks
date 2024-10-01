use std::fs;
use std::path::Path;

fn main() {
    rename("input.txt", "output.txt");
    rename("c:/input.txt", "c:/output.txt");
    rename_dir("docs", "mydocs");
    rename_dir("c:/docs", "c:/mydocs");
}

fn rename(src: &str, dst: &str) {
    if Path::new(dst).exists() {
        fs::remove_file(dst).expect("Failed to remove file");
    }
    fs::rename(src, dst).expect("Failed to rename file");
}

fn rename_dir(src: &str, dst: &str) {
    if Path::new(dst).exists() {
        fs::remove_dir_all(dst).expect("Failed to remove directory");
    }
    fs::rename(src, dst).expect("Failed to rename directory");
}
