use std::fs;
use std::io::Error;

fn file_exists(path: &str) {
    println!("{}", path);

    if fs::metadata(path).is_ok() {
        match fs::metadata(path) {
            Ok(meta) => {
                if meta.is_dir() {
                    println!(" is a directory");
                } else {
                    println!(" exists with a file size of {} bytes", meta.len());
                }
            }
            Err(_e) => println!(" does not exist"),
        };
    } else {
        println!("{} does not exist", path);
    }
}

fn main() {
    file_exists("input.txt");
    file_exists("/input.txt");
    file_exists("docs/input.txt");
    file_exists("docs/zero_length.txt");
}
