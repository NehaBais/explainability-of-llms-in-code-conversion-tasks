use std::fs::{create_dir_recursive, Path};

fn main() {
    let path = Path::new("/path/to/dir");
    if !path.exists() {
        create_dir_recursive(path).expect("Failed to create directory");
    }
}
