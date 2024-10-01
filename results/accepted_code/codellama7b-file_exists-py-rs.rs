use std::fs;

fn main() {
    // Check if input.txt exists in current working directory
    let path = "input.txt";
    if fs::metadata(path).is_ok() {
        println!("{} exists", path);
    } else {
        println!("{} does not exist", path);
    }

    // Check if input.txt exists in root directory
    let path = "/input.txt";
    if fs::metadata(path).is_ok() {
        println!("{} exists", path);
    } else {
        println!("{} does not exist", path);
    }

    // Check if docs directory exists in current working directory
    let path = "docs";
    if fs::metadata(path).is_ok() {
        println!("{} exists", path);
    } else {
        println!("{} does not exist", path);
    }

    // Check if docs directory exists in root directory
    let path = "/docs";
    if fs::metadata(path).is_ok() {
        println!("{} exists", path);
    } else {
        println!("{} does not exist", path);
    }
}
