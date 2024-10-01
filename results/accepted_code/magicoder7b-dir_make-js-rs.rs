use std::fs;
use std::path::{Path, PathBuf};

fn mkdirp(p: &str) {
    let pb = PathBuf::from(p);

    if fs::metadata(&pb).is_err() {
        let parent_dir = pb.parent().unwrap();
        mkdirp(parent_dir.to_str().unwrap()); // Recursively call on the parent directory

        match fs::create_dir(&pb) {
            Ok(_) => println!("Directory created successfully"),
            Err(e) => eprintln!("Error creating directory: {}", e),
        }
    } else {
        println!("Directory already exists");
    }
}
