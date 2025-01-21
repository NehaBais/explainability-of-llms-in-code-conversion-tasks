use std::fs;
use std::path::PathBuf;

fn main() {
    let path = PathBuf::from("./output.txt");
    fs::write(&path, &[]).unwrap();

    let path = PathBuf::from("/output.txt");
    fs::write(&path, &[]).unwrap();

    let path = PathBuf::from("./docs");
    fs::create_dir(&path).unwrap();

    let path = PathBuf::from("/docs");
    fs::create_dir(&path).unwrap();
}
