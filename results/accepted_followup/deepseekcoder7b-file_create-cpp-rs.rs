use std::fs;

fn main() {
    // Create an empty file in the current directory
    let _ = fs::File::create("output.txt").unwrap();

    // Create an empty directory in the current directory
    let _ = fs::DirBuilder::new()
        .recursive(true)
        .write(true)
        .create("docs");
}
