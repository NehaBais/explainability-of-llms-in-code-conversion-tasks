use std::fs;
use std::path::Path;

fn create(directory: &str) {
    let output_path = Path::new(directory).join("output.txt");
    fs::File::create(&output_path).expect("Failed to create file");

    let docs_dir = Path::new(directory).join("docs");
    fs::create_dir(&docs_dir).expect("Failed to create directory");
}

fn main() {
    create("."); // current directory
    create("/"); // root directory
}
