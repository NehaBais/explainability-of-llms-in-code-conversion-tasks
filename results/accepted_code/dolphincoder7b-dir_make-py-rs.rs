use std::fs;

pub fn mkdirp(path: &str) {
    match fs::create_dir_all(path) {
        Ok(_) => println!("Directory created"),
        Err(e) => println!("Error creating directory: {}", e),
    }
}
