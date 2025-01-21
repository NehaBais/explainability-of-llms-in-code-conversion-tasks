use std::fs;
use std::path::Path;

fn mkdirp(path: &str) {
    fs::create_dir_all(path).unwrap_or_else(|_| panic!("Failed to create directory"));
}