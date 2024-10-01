use std::fs;

fn main() {
    println!("Checking file existence:");

    // Check if 'input.txt' exists in current directory
    match fs::metadata("input.txt") {
        Ok(_) => println!("'input.txt' exists"),
        Err(e) => println!("'input.txt' does not exist: {}", e),
    }

    // Check if 'input.txt' exists in the filesystem root
    match fs::metadata("/input.txt") {
        Ok(_) => println!("/input.txt' exists"),
        Err(e) => println!("/input.txt' does not exist: {}", e),
    }

    println!("Checking directory existence:");

    // Check if 'docs' exists in current directory
    match fs::metadata("docs") {
        Ok(_) => println!("'docs' exists"),
        Err(e) => println!("'docs' does not exist: {}", e),
    }

    // Check if 'docs' exists in the filesystem root
    match fs::metadata("/docs") {
        Ok(_) => println!("/docs' exists"),
        Err(e) => println!("/docs' does not exist: {}", e),
    }
}
