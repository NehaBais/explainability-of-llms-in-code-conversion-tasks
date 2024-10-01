use std::fs;

fn create_directories(path_to_create: &str) -> Result<(), std::io::Error> {
    let path = path_to_create;

    match fs::create_dir_all(path) {
        Ok(_) => Ok(()),
        Err(e) => Err(e),
    }
}
