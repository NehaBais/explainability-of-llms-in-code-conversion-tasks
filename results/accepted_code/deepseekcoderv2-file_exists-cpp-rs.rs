use std::path::Path;

fn file_exists(file_name: &str) {
    let path = Path::new(file_name);
    println!("Checking {}...", file_name);
    
    if path.exists() {
        if path.is_dir() {
            println!("{} is a directory", file_name);
        } else {
            match std::fs::metadata(path) {
                Ok(meta) => println!("{} exists with a file size of {} bytes.", file_name, meta.len()),
                Err(_) => println!("Failed to get file size for {}", file_name),
            }
        }
    } else {
        println!("{} does not exist", file_name);
    }
}

fn main() {
    file_exists("input.txt");
    file_exists("zero_length.txt");
    file_exists("docs/input.txt");
    file_exists("docs/zero_length.txt");
}