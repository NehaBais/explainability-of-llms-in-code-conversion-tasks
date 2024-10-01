use std::fs;
use std::path::Path;

fn file_exists(path: &str) {
    let path = Path::new(path);

    match fs::metadata(path) {
        Ok(md) if md.is_file() => {
            println!("{} exists with a file size of {} bytes.", path.to_string_lossy(), fs::metadata(path).unwrap().len());
        },
        Ok(_) => println!("{} is a directory", path.to_string_lossy())  ,
        Err(_) => println!("does not exist"),
        }
    } else {
        match fs::metadata(path) {
            Ok(md) if md.is_dir() => {
                println!("{} is a directory", path.to_string_lossy());
            },
            Err(_) => println!("{} does not exist", path.to_string_lossy())  ,
        }
    }
}

fn main() {
    file_exists("input.txt");
    file_exists("zero_length.txt");
    file_exists("docs/input.txt");
    file_exists("docs/zero_length.txt");
}