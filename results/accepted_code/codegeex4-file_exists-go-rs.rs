use std::fmt;
use std::fs;
use std::path::{Path, PathBuf};

fn print_stat(p: &str) {
    let path = Path::new(p);
    match fs::metadata(path) {
        Ok(metadata) => {
            if metadata.is_dir() {
                println!("{} is a directory", p);
            } else {
                println!("{} is a file", p);
            }
        }
        Err(error) => eprintln!("{}", error),
    }
}

fn main() {
    print_stat("input.txt");
    print_stat("/input.txt");
    print_stat("docs");
    print_stat("/docs");
}
