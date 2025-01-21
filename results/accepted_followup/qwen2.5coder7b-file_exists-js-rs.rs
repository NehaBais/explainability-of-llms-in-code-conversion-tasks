// Corrected code with a valid crate name
use std::fs;
use std::path::Path;

fn main() {
    check_path(Path::new("input.txt"));
    check_path(Path::new("docs"));

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
