use std::fs;

fn create_directory(path: &str) {
    match fs::create_dir_all(path) {
        Ok(_) => println!("Path successfully created"),
        Err(e) => eprintln!("Error creating path: {}", e),
    }
}

fn main() {
    create_directory("C:/parent/test");
}
