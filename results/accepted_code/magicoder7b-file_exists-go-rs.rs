use std::fs;
use std::path::Path;

fn print_stat(p: &str) {
    match fs::metadata(p) {
        Ok(m) => {
            if m.is_dir() {
                println!("{} is a directory", p);
            } else {
                println!("{} is a file", p);
            }
        }
        Err(e) => eprintln!("Error: {}", e),
    }
}

fn main() {
    print_stat("input.txt");
    print_stat("/input.txt");
    print_stat("docs");
    print_stat("/docs");
}
