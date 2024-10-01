use std::fs::{metadata, File, OpenOptions};
use std::io::Write;
use std::process::Command;

fn main() {
    create_empty_file("output.txt");
    create_directory("docs");

    let mut path = String::from("/");
    path.push('/'); // Add a trailing slash to the path
    let old_dir = std::env::current_dir().unwrap();

    // Change directory to root and repeat the operations
    std::env::set_current_dir(&path).expect("Failed to change directory");

    create_empty_file("output.txt");
    create_directory("docs");

    // Switch back to original working directory
    std::env::set_current_dir(&old_dir).unwrap();
}

fn create_empty_file(name: &str) {
    let mut file = OpenOptions::new()
        .create(true)
        .open(name)
        .expect("Failed to create a new file.");
    write!(file, "").expect("Failed to write in the file.");
}

fn create_directory(name: &str) {
    std::fs::create_dir(&name).expect("Failed to create directory");
}
