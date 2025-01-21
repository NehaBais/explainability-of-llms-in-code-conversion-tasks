use std::path::PathBuf;
use std::fs;

fn file_exists(p: &str) {
    let p = PathBuf::from(p);
    match fs::read_dir(&p) {
        Ok(_) => match fs::symlink_to_dir_entry(&p.into()) {
            Some(direntry) if direntry.is_directory() {
                println!("{} is a directory", p);
            } else {
                let size = direntry.len();
                println!("exists with a file size of {} bytes.", size);
            }
        }
    };
}

fn main() {
    file_exists("input.txt");
    file_exists("zero_length.txt");
    // We can pass absolute path also as the method does not depend on file system root
    file_exists("/docs/input.txt");
    file_exists("/docs/zero_length.txt");
}