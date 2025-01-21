use std::fs;

fn mkdirp(path: &str) -> Result<(), std::io::Error> {
    fs::create_dir_all(path)
}

fn main() {
    mkdirp("./path/to/dir").expect("Failed to create directory");
}
