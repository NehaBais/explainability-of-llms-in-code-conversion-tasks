use std::fs::{self, create_dir_if};

fn main() {
    let dir = "/path/to/directory";

    // Creating the directory if it does not already exist
    create_dir_if(dir).expect(&format!("Failed to create {}.", dir));
}