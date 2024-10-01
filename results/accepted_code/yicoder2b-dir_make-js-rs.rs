extern crate fs;
use fs::{File, FileType};
use std::fs::{create_dir_recursive, read, read_link, remove_file, LinkOption, Path};

fn main() {
    let mut path = Path::new("./path/to/dir");
    if let Some(_) = read_link(&path) {
        println!("{}", path.as_str());
        // If the link exists, remove it and then try again.
        remove_file(path).expect("The file can't be removed.");
    } else if !path.is_dir() {
        // The directory doesn't exist. Create its parent and try again.
        create_dir_recursive(&path.parent().unwrap())
            .expect("Failed to create parent directories.");
    }
}
