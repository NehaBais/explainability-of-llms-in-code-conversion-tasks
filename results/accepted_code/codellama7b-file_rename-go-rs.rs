use std::{fs, path};

fn main() {
    let input_path = path::Path::new("input.txt");
    let output_path = path::Path::new("output.txt");
    fs::rename(input_path, output_path).unwrap();

    let docs_path = path::Path::new("docs");
    let mydocs_path = path::Path::new("mydocs");
    fs::rename(docs_path, mydocs_path).unwrap();
}
