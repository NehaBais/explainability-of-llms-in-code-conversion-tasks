use std::fs;
use std::path::Path;
fn main() {
    let path = "./path/to/dir";
    if Path::new(path).exists() {
        return;
    }
    match fs::create_dir_all(path) {
        Ok(_) => (),
        Err(_) => println!("Couldn't create directory {}", path),
    }
}
