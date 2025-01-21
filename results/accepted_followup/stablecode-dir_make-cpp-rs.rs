fn create_directories(path_to_create: &str) -> Result<(), std::io::Error> {
    let path = path_to_create;

    match fs::create_dir_all(path) {
        Ok(_) => Ok(()),
        Err(e) => Err(e),
    }
}

fn main() {
    // Call the create_directories function with a specific path string.
    let path = "./path/to/directory";
    match create_directories(&path)) {
        Ok(_) => println!("Successfully created directories."),
        Err(e) => eprintln!("Error occurred while creating directories: {}", e),
    }
}