use std::fs;
use std::path::Path;

fn main() {
    // Check for files and directories in the current working directory
    check_path(Path::new("input.txt"));
    check_path(Path::new("docs"));

    // Check for files and directories in the filesystem root
    let root = Path::new("/");
    check_path(&root.join("input.txt"));
    check_path(&root.join("docs"));
}

fn check_path(path: &Path) {
    if fs::metadata(path).is_ok() {
        println!("{} exists.", path.display());
    } else {
        println!("{} does not exist.", path.display());
    }
}