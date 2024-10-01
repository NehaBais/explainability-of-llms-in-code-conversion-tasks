use std::fs;

fn main() {
    let current_directory = ".";
    let root_directory = "/";

    // Check for regular file in the current directory
    if let Ok(metadata) = fs::metadata("input.txt") {
        if metadata.is_file() {
            println!("input.txt is a regular file");
        } else {
            println!("input.txt is not a regular file");
        }
    } else {
        println!("Couldn't access input.txt in the current directory");
    }

    // Check for directory in the current directory
    if let Ok(metadata) = fs::metadata("docs") {
        if metadata.is_dir() {
            println!("docs is a directory");
        } else {
            println!("docs is not a directory");
        }
    } else {
        println!("Couldn't access docs in the current directory");
    }

    // Check for regular file in the root directory
    if let Ok(metadata) = fs::metadata(root_directory.to_owned() + "input.txt") {
        if metadata.is_file() {
            println!("/input.txt is a regular file");
        } else {
            println!("/input.txt is not a regular file");
        }
    } else {
        println!("Couldn't access /input.txt in the root directory");
    }

    // Check for directory in the root directory
    if let Ok(metadata) = fs::metadata(root_directory.to_owned() + "docs") {
        if metadata.is_dir() {
            println!("/docs is a directory");
        } else {
            println!("/docs is not a directory");
        }
    } else {
        println!("Couldn't access /docs in the root directory");
    }
}
