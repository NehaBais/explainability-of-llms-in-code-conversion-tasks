use std::fs;

fn main() {
    // Create an empty file called "output.txt" in the current directory and root.
    fs::File::create("output.txt").expect("Failed to create output file");
    let _ = fs::File::create("/output.txt");

    // Create an empty directory called "docs" in the current directory and root.
    fs::create_dir("docs").expect("Failed to create docs directory");
    let _ = fs::create_dir("/docs");
}
