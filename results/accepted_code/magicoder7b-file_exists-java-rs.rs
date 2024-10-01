use std::fs;
use std::path::Path;

fn main() {
    let path_current = Path::new("docs/input.txt");
    let path_root = Path::new("/docs/input.txt");

    match fs::metadata(path_current) {
        Ok(_) => println!("{} exists", path_current.display()),
        Err(e) => eprintln!(
            "Error: {} does not exist or not accessible. Error: {:?}",
            path_current.display(),
            e
        ),
    }

    match fs::metadata(path_root) {
        Ok(_) => println!("{} exists", path_root.display()),
        Err(e) => eprintln!(
            "Error: {} does not exist or not accessible. Error: {:?}",
            path_root.display(),
            e
        ),
    }
}
