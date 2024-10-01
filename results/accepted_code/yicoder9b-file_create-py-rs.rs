use std::fs::{create_dir, File};
use std::path::Path;

fn create(directory: &str) {
    let mut path = directory.to_string();
    path.push('/');
    path.push_str("output.txt");
    File::create(&path).expect("Failed to create file");

    path = directory.to_string();
    path.push('/');
    path.push_str("docs");
    create_dir(&path).expect("Failed to create directory");
}
fn main() {
    // current directory
    create(".");
    // root directory, this might not work depending on the system and permissions
    create("/");
}
