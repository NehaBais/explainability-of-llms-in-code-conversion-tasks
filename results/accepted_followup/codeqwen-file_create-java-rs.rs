use std::fs;
use std::path::PathBuf;

fn main() {
    create_file("output.txt");
    create_dir("docs");
    create_file(PathBuf::from(std::env::current_dir().unwrap()).join("output.txt"));
    create_dir(PathBuf::from(std::env::current_dir().unwrap()).join("docs"));
}

fn create_file<P: AsRef<std::path::Path> + Copy>(path: P) {
    if let Err(e) = fs::File::create(path) {
        eprintln!("Unable to create file: {}", e);
    } else {
        println!("Successfully created file at path {:?}", path.as_ref());
    }
}

fn create_dir<P: AsRef<std::path::Path> + Copy>(path: P) {
    if let Err(e) = fs::create_dir(path) {
        eprintln!("Unable to create directory: {}", e);
    } else {
        println!("Successfully created directory at path {:?}", path.as_ref());
    }
}
