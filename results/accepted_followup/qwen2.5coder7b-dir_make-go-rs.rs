use std::fs;
use std::path::Path;

fn main() {
    let dir_path = Path::new("/tmp/some/path/to/dir");
    match fs::create_dir_all(dir_path) {
        Ok(_) => println!("Directory created successfully."),
        Err(e) => eprintln!("Failed to create directory: {}", e),
    }
}
