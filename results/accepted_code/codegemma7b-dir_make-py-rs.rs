use std::fs;

fn mkdirp(path: &str) {
    fs::create_dir_all(path).expect("Failed to create directory");
}
