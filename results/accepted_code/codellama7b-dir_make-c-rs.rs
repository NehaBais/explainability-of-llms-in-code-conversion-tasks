use std::fs;
use std::path::PathBuf;
use std::process::Command;

fn main() {
    let args: Vec<String> = std::env::args().collect();
    if args.len() != 2 {
        println!("Usage: {} <path>", args[0]);
        return;
    }

    let path = PathBuf::from(args[1].clone());
    let mut dir_exists = true;

    // Check if the directory exists
    match fs::metadata(&path) {
        Ok(meta) => {
            if !meta.is_dir() {
                println!("{} is not a directory", path.display());
                return;
            }
        }
        Err(err) => {
            if err.kind() == std::io::ErrorKind::NotFound {
                dir_exists = false;
            } else {
                eprintln!("{}", err);
                return;
            }
        }
    }

    // Create the directory and any missing parents if it doesn't exist
    if !dir_exists {
        match fs::create_dir_all(&path) {
            Ok(()) => (),
            Err(err) => {
                eprintln!("{}", err);
                return;
            }
        }
    }
}
