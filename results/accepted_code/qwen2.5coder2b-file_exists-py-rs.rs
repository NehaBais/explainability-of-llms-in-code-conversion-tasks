use std::fs;

fn main() {
    // Check if input.txt exists in the current working directory
    if fs::path_exists("input.txt") {
        println!("input.txt exists in the current working directory.");
    } else {
        println!("input.txt does not exist in the current working directory.");
    }

    // Check if input.txt exists at the filesystem root
    if fs::path_exists("/input.txt") {
        println!("input.txt exists at the filesystem root.");
    } else {
        println!("input.txt does not exist at the filesystem root.");
    }

    // Check if docs directory exists in the current working directory
    if fs::metadata("docs").is_ok() {
        println!("docs directory exists in the current working directory.");
    } else {
        println!("docs directory does not exist in the current working directory.");
    }

    // Check if docs directory exists at the filesystem root
    if fs::metadata("/docs").is_ok() {
        println!("docs directory exists at the filesystem root.");
    } else {
        println!("docs directory does not exist at the filesystem root.");
    }
}