use std::fs;
use std::io::Error;

fn main() {
    match fs::metadata("input.txt") {
        Ok(size) => println!(
            "Size of 'input.txt' in current working directory: {} bytes",
            size.len()
        ),
        Err(error) => println!("Failed to get file info for 'input.txt'. Error: {}", error),
    }

    match fs::metadata("/full/path/to/root/c:/input.txt") {
        // replace "/full/path/to/root" with the actual path of root
        Ok(size) => println!(
            "Size of 'c:/input.txt' in filesystem root: {} bytes",
            size.len()
        ),
        Err(error) => println!(
            "Failed to get file info for 'c:/input.txt'. Error: {}",
            error
        ),
    }
}
