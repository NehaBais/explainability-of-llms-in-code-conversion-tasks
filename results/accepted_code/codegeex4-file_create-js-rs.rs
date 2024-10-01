use std::fs;
use std::io;

fn create_file(path: &str) {
    match fs::File::create(path) {
        Ok(_) => println!("Created file at {}", path),
        Err(error) => eprintln!("Problem creating the file: {:?}", error),
    }
}

fn create_dir(path: &str) {
    match fs::create_dir(path) {
        Ok(_) => println!("Created directory at {}", path),
        Err(error) => eprintln!("Problem creating the directory: {:?}", error),
    }
}

fn main() {
    let paths = vec![
        (".", "/"),
        ("./output.txt", "/output.txt"),
        ("./docs", "/docs"),
    ];

    for (path, root_path) in &paths {
        create_file(&format!("{}/{}", path, "output.txt"));
        create_file(root_path);
        create_dir(&format!("{}/{}", path, "docs"));
        create_dir(root_path);
    }
}
