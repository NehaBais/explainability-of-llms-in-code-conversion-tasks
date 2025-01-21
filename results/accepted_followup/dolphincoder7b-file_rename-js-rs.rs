use std::fs::{remove_file, rename};
use walkdir::{DirEntry, WalkDir};

fn main() {
    let src = PathBuf::from("input.txt");
    let dest1 = PathBuf::from("output.txt");
    let dest2 = PathBuf::from("/c/output.txt");

    rename(&src, &dest1).unwrap(); // unwrap() is used to propagate the error to a more user-friendly location

    for entry in WalkDir::new(".") {
        if let Ok(entry) = entry {
            if let Some(path) = entry.path().to_str() {
                println!("{:?}", path);
            }
        }
    }

    rename("docs", "mydocs").unwrap(); // equivalent to MoveFolder in JavaScript
    remove_file("/c/docs").unwrap(); // equivalent to RemoveFolder in JavaScript
}
