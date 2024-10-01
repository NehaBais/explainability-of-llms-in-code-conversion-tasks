use std::fs;

fn main() {
    // current working directory
    fs::rename("input.txt", "output.txt").expect("Unable to rename the file");
    fs::rename("docs", "mydocs").expect("Unable to rename the file");

    // filesystem root
    fs::rename("/input.txt", "/output.txt").expect("Unable to rename the file");
    fs::rename("/docs", "/mydocs").expect("Unable to rename the file");
}
