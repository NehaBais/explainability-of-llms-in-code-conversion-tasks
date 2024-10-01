use std::fs::{create_dirs, File};
use std::path::PathBuf;

fn main() {
    if let Err(_) = create_dirs(
        PathBuf::from(&["./path/to/dir".to_string()]), /* mode */
    ) {
        match create_dirs(/* path */) {
            Err(e) => println!("couldn't create directory: {}", e),
            Ok(_) => println!("directory created successfully"),
        }
    } else {
        println!("directory already exists");
    }
}
