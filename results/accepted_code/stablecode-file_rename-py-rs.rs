use std::fs;

fn main() {
    let new_path = "mydocs";

    // Rename current directory
    fs::rename("docs", new_path).unwrap();

    // Rename input file
    fs::rename("input.txt", "output.txt").unwrap();
}
