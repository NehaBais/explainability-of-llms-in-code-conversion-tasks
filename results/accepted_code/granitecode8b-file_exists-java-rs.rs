use std::fs;
fn main() {
    // Verifying the existence of "input.txt" and "docs" in the current working directory
    let file_exists = fs::metadata("docs/input.txt").is_ok();
    println!(
        "File exists in the current working directory: {}",
        file_exists
    );
    // Verifying the existence of "input.txt" and "docs" in the filesystem root
    let file_exists = fs::metadata("/docs/input.txt").is_ok();
    println!("File exists in the filesystem root: {}", file_exists);
}
