use std::fs;
use std::path::Path;
fn main() {
    let current_dir = env!("CWD");
    let input_file = Path::new(current_dir).join("input.txt");
    let docs_dir = Path::new(current_dir).join("docs");

    if !input_file.exists() || !docs_dir.exists() {
        println!("Error: Input file or directory does not exist.");
        return;
    }

    let root_input_file = Path::new("/").join("input.txt");
    let root_docs_dir = Path::new("/").join("docs");

    if !root_input_file.exists() || !root_docs_dir.exists() {
        println!("Error: Input file or directory does not exist.");
        return;
    }

    println!("Input file and directory exist.");
}
