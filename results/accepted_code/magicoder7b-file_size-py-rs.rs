use std::fs;

fn main() {
    let file_path1 = "input.txt";
    let file_path2 = "/input.txt";

    match fs::metadata(file_path1) {
        Ok(meta) => println!("The size of '{}' is: {} bytes", file_path1, meta.len()),
        Err(_) => eprintln!("File '{}' not found or cannot access it.", file_path1),
    }

    match fs::metadata(file_path2) {
        Ok(meta) => println!("The size of '{}' is: {} bytes", file_path2, meta.len()),
        Err(_) => eprintln!("File '{}' not found or cannot access it.", file_path2),
    }
}
