use std::fs;

fn main() {
    fs::File::create("input.txt").expect("Failed to create file");
    fs::File::create("/input.txt").expect("Failed to create root file");
    fs::create_dir("docs").expect("Failed to create directory");
    fs::create_dir("/docs").expect("Failed to create root directory");
}
