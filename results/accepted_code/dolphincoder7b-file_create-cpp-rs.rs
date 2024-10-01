use std::fs;
use std::fs::File;

fn main() {
    File::create("output.txt").unwrap();
    File::create("/output.txt").unwrap();

    fs::create_dir("docs").expect("Failed to create directory");
    fs::create_dir("/docs").expect("Failed to create directory");
}
