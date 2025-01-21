use std::fs;

fn main() {
    // Your directory creation logic goes here
}

fn mkdirp(path: &str) -> Result<(), std::io::Error> {
    fs::create_dir_all(path)
}
