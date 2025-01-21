use std::fmt;
use std::{env, fs};
fn main() {
    let path = env::args().nth(1).expect("Please provide a directory name");
    if fs::metadata(&path).is_err() {
        if fs::create_dir_all(&path).is_ok() {
            println!("Directory created successfully");
        } else {
            eprintln!("Error creating directory: {}", path.display());
        }
    } else {
        println!("Directory already exists");
    }
}
