use std::env;
use std::ffi::OsStr;
use std::fs::{self, DirBuilder};
use std::os::unix::prelude::*;
use std::process;

fn main() {
    let args: Vec<String> = env::args().collect();

    if args.len() != 2 {
        eprintln!("usage: {} <path>", args[0]);
        process::exit(1);
    }

    let path = &args[1];

    // Check if the path is a directory and if it exists, then create the missing directories
    match fs::metadata(path) {
        Ok(metadata) => {
            if metadata.is_dir() {
                println!("Directory {} already exists", path);
            } else {
                eprintln!(
                    "Cannot create directory {}: file exists with the same name",
                    path
                );
                process::exit(1);
            }
        }
        Err(ref error) if error.kind() == std::io::ErrorKind::NotFound => {
            // The path does not exist, so we create it
            match DirBuilder::new().recursive(true).create(path) {
                Ok(_) => println!("Created directory {}", path),
                Err(err) => {
                    eprintln!("Failed to create directory {}: {}", path, err);
                    process::exit(1);
                }
            }
        }
        Err(error) => {
            eprintln!(
                "An error occurred while checking the existence of {}: {}",
                path, error
            );
            process::exit(1);
        }
    }
}
