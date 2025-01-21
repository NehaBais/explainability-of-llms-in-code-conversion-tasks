use std::env;
use std::fs;
use std::io;
use std::path::PathBuf;

fn main() {
    let args: Vec<String> = env::args().collect();
    if args.len() != 2 {
        eprintln!("usage: {} <path>", args[0]);
        return;
    }

    let path_to_create: PathBuf = PathBuf::from(&args[1]);

    if fs::metadata(&path_to_create).is_ok() {
        return;
    }

    match fs::create_dir_all(&path_to_create) {
        Ok(_) => {}
        Err(e) => {
            eprintln!("couldn't create directory: {}", e);
            return;
        }
    }
}