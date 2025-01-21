use std::fs;
use std::io;

fn print_stat(path: &str) {
    match fs::metadata(path) {
        Ok(meta) => {
            if meta.is_dir() {
                println!("{} is a directory", path);
            } else {
                println!("{} is a file", path);
            }
        },
        Err(e) => eprintln!("Error: {}", e),
    }
}

fn main() {
    print_stat("input.txt");
    print_stat("/input.txt");
    print_stat("docs");
    print_stat("/docs");
}