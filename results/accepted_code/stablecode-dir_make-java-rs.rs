use std::fs;

fn main() -> Result<(), std::io::Error> {
    let path = "./path/to/dir";

    // create directories if they don't exist.
    if let Err(e) = fs::create_dir_all(&path) {
        println!("Failed to create directory: {}", e);
    }

    Ok(())
}
