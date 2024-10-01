use std::fs;

fn main() {
    // Create a directory named "docs"
    if let Err(e) = fs::create_dir("docs") {
        println!("Error creating dir: {}", e);
    }

    // Delete the newly created directory
    if let Err(e) = fs::remove_dir("docs") {
        println!("Error removing dir: {}", e);
    }

    // Create a file named "input.txt"
    if let Err(e) = fs::write("input.txt", b"Hello, world!") {
        println!("Error writing to file: {}", e);
    }

    // Delete the newly created file
    if let Err(e) = fs::remove_file("input.txt") {
        println!("Error removing file: {}", e);
    }

    // Check for a file named "input.txt" in the current working directory
    println!("{}", fs::metadata("input.txt").is_ok());

    // Check for a file named "/input.txt" in the filesystem root
    println!("{}", fs::metadata("/input.txt").is_ok());
}
