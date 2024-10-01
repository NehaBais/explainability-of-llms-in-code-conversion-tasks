use std::fs;
use std::io::Write;

fn main() {
    let mut f = std::fs::File::create("output.txt").expect("Failed to create file");
    fs::write("/output.txt", b"").expect("Failed to write to file");
    fs::create_dir("docs").expect("Failed to create directory");
    fs::create_dir("/docs").expect("Failed to create directory");
}
