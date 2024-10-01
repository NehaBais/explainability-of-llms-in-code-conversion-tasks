use std::fs;

fn main() {
    // Rename input.txt to output.txt in the current working directory
    if let Err(e) = fs::rename("input.txt", "output.txt") {
        eprintln!("Error renaming file: {}", e);
    } else {
        println!("File renamed successfully.");
    }

    // Rename docs to mydocs in the current working directory
    if let Err(e) = fs::rename("docs", "mydocs") {
        eprintln!("Error renaming directory: {}", e);
    } else {
        println!("Directory renamed successfully.");
    }

    // Rename input.txt to output.txt in the root of the filesystem (assuming "/" is the root)
    if let Err(e) = fs::rename("/input.txt", "/output.txt") {
        eprintln!("Error renaming file: {}", e);
    } else {
        println!("File renamed successfully.");
    }

    // Rename docs to mydocs in the root of the filesystem (assuming "/" is the root)
    if let Err(e) = fs::rename("/docs", "/mydocs") {
        eprintln!("Error renaming directory: {}", e);
    } else {
        println!("Directory renamed successfully.");
    }
}
