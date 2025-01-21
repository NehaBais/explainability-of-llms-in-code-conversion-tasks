use std::fs;
use std::path::Path;

fn main() {
    // Create an empty file called "output.txt" of size 0 bytes in the current working directory.
    let output_file = Path::new("output.txt");
    fs::write(output_file, "").expect("Failed to write output file");

    // Create an empty directory called "docs" in the current working directory.
    let docs_dir = Path::new("docs");
    fs::create_dir(docs_dir).expect("Failed to create docs directory");

    // Create an empty file called "output.txt" of size 0 bytes in the root filesystem directory.
    let root_output_file = Path::new("/").join("output.txt");
    fs::write(root_output_file, "").expect("Failed to write output file at root");

    // Create an empty directory called "docs" in the root filesystem directory.
    let root_docs_dir = Path::new("/").join("docs");
    fs::create_dir(root_docs_dir).expect("Failed to create docs directory at root");
}