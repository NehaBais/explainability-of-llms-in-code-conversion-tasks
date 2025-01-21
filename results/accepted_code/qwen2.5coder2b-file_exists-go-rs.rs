use std::fs;
use std::path::Path;

fn print_stat(p: &str) {
    match fs::metadata(p).unwrap() {
        Ok(metadata) => {
            if metadata.is_dir() {
                println!("{} is a directory", p);
            } else {
                println!("{} is a file", p);
            }
        },
        Err(e) => {
            eprintln!("Error: {}", e);
        }
    }
}

fn main() {
    let current_working_dir_path = std::env::current_dir().unwrap();
    print_stat(current_working_dir_path.to_str().unwrap());
    print_stat(format!("{}/input.txt").to_string().as_str());
    print_stat(format!("{}/docs/").to_string().as_str()); // Note the trailing slash for directories
}