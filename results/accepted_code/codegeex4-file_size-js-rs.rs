use std::fs;

fn main() {
    let input_file = "input.txt";
    let root_input_file = "/input.txt";

    match fs::metadata(input_file) {
        Ok(metadata) => println!("File size of '{}' is {} bytes", input_file, metadata.len()),
        Err(error) => eprintln!("Failed to get file size: {}", error),
    }

    match fs::metadata(root_input_file) {
        Ok(metadata) => println!(
            "File size of '{}' is {} bytes",
            root_input_file,
            metadata.len()
        ),
        Err(error) => eprintln!("Failed to get file size: {}", error),
    }
}
