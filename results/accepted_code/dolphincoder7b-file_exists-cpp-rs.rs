use std::fs;
use std::io;
use std::path::Path;

fn file_exists(path: &str) {
    let path = Path::new(path);

    if path.exists() {
        match path.is_dir() {
            true => println!("{} is a directory", path.display()),
            false => match fs::metadata(path) {
                Ok(meta) => println!(
                    "{} exists with a file size of {} bytes.",
                    path.display(),
                    meta.len()
                ),
                Err(_) => eprintln!("Failed to get file metadata: {}", io::Error),
            },
        }
    } else {
        println!("{} does not exist", path.display());
    }
}

fn main() {
    file_exists("input.txt");
    file_exists("zero_length.txt");
    file_exists("docs/input.txt");
    file_exists("docs/zero_length.txt");
}
