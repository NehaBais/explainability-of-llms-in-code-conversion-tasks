use std::fs;
use std::io::Error;

fn main() {
    let path = "input.txt";

    match fs::metadata(path) {
        Ok(size) => println!("Size of file '{}' is {} bytes", path, size.len()),
        Err(error) => match error.kind() {
            Error::NotFound => println!("File '{}' not found.", path),
            _ => eprintln!("Error accessing '{}': {}", path, error),
        },
    }

    // To access the file in root directory, you need to include full path.
    // For example, if your user is "username" on Linux/macOS and the file is located at "/home/username/input.txt".
    let root_path = "/home/username/input.txt";

    match fs::metadata(root_path) {
        Ok(size) => println!("Size of file '{}' is {} bytes", root_path, size.len()),
        Err(error) => match error.kind() {
            Error::NotFound => println!("File '{}' not found.", root_path),
            _ => eprintln!("Error accessing '{}': {}", root_path, error),
        },
    }
}
