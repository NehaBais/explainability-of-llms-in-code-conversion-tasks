use std::{fs, io};

fn main() {
    if let Some(args) = std::env::args().skip(1).collect::<Vec<String>>() {
        let path_to_create: &str = args[0].as_str();

        match fs::create_dir_all_with_error(path_to_create) {
            Ok(_) => (),
            Err(e) => println!("couldn't create directory: {}", e),
        }
    } else {
        println!("usage: mkdir <path>");
    }
}
