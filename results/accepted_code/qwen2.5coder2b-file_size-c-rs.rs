use std::fs;

fn main() {
    // Read file size from input.txt in the current working directory
    match fs::metadata("input.txt") {
        Ok(metadata) => println!("File size of input.txt (current directory): {}", metadata.len()),
        Err(err) => eprintln!("Error reading input.txt: {}", err),
    }

    // Read file size from /input.txt in the system root
    match fs::metadata("/input.txt") {
        Ok(metadata) => println!("File size of /input.txt (system root): {}", metadata.len()),
        Err(err) => eprintln!("Error reading /input.txt: {}", err),
    }
}