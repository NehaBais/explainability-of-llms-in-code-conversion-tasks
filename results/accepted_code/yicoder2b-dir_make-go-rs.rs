use std::fs::{self, create_dir_all};
use std::path::PathBuf;

fn main() {
    let path = PathBuf::from("/tmp/some/path/to/dir");
    if !create_dir_all(&path).is_ok() {
        match create_dir_all(&path) {
            Err(_e) => (), // Don't panic if the directory already exists
            Ok(()) => println!("Directory created successfully"),
        }
    } else {
        println!("Directory already exists");
    }
}
