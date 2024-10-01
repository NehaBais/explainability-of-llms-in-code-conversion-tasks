use std::fs;

fn main() {
    // Create an empty file in the current directory and root directory
    let _ = fs::File::create("output.txt").unwrap();
    let _ = fs::File::create("/output.txt").unwrap();

    // Create an empty directory in the current directory and root directory
    let _ = std::fs::DirBuilder::new().create("docs").unwrap();
    let _ = std::fs::DirBuilder::new().create("/docs").unwrap();
}
