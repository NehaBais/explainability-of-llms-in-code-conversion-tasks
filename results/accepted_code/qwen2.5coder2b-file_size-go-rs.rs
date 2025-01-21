use std::fs;

fn print_file_size(file: &str) {
    match fs::metadata(file).unwrap() {
        Ok(metadata) => println!("Size of {}: {}", file, metadata.len()),
        Err(e) => eprintln!("Error getting file size: {}", e),
    }
}

fn main() {
    let input_dir_path = "input.txt";
    print_file_size(input_dir_path);

    let root_dir_path = "/";
    print_file_size(root_dir_path);
}