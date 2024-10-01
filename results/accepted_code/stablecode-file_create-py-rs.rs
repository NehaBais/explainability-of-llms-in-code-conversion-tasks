use std::fs;
use std::os::Path;

fn create(directory: &str) {
    let dir_path = format!("{}/docs", directory);

    // Creates "output.txt" and an empty "docs" directory.
    fs::create_dir(&dir_path).expect("Unable to create docs directory");

    let file_path = format!("{}/output.txt", directory);

    // Creates "output.txt" with size 0 bytes.
    fs::File::create(&file_path).expect("Unable to create output.txt file");
}

fn main() {
    create("/"); // root directory
    create(".here"); // current directory
}
