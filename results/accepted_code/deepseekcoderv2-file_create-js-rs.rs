use std::fs;

fn main() {
    fs::write("output.txt", "").unwrap();
    fs::write("/output.txt", "").unwrap();

    fs::create_dir("docs").unwrap();
    fs::create_dir("/docs").unwrap();
}
