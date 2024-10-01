use std::fs;
use std::path::Path;

fn main() {
    // Check for the file and directory in the current working directory
    let current_dir_file = Path::new("input.txt");
    let current_dir_dir = Path::new("docs");

    check_path(current_dir_file);
    check_path(current_dir_dir);

    // Check for the file and directory in the filesystem root
    let root_file = Path::new("/input.txt");
    let root_dir = Path::new("/docs");

    check_path(root_file);
    check_path(root_dir);
}

fn check_path(path: &Path) {
    match path.exists() {
        true => println!("{} exists.", path.display()),
        false => println!("{} does not exist.", path.display()),
    }
}
