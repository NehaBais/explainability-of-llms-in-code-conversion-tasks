use std::fs::DirBuilder;
use std::{io, string};

// This is a simple function to convert the C++ code into Rust code.
fn main() {
    let path = "/tmp/mydir"; // Change this to the directory you want to create
    if !path_exists(path) {
        println!("Creating directory: {}", path);
        DirBuilder::new().recursive(true).create(path).unwrap();
    } else {
        println!("Directory already exists");
    }
}

fn path_exists(path: &str) -> bool {
    fs::metadata(path).is_ok()
}
