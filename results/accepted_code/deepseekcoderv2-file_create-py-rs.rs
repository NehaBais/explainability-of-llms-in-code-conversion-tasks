use std::fs;
fn main() {
    fs::create_dir("docs"); // Create an empty directory called "docs" in the current working directory.
    let file = File::create("output.txt").unwrap(); // Create a new, empty output.txt file in the current working directory.
}
