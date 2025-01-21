use std::fs;
use std::io::Error; // Importing Error directly here fixes the compilation error
use std::path::Path;

fn file_exists(path: &str) {
    let path = Path::new(path);

    if path.exists() {
        match path.is_dir() {
            true => println!("{} is a directory", path.display()),
            false => match fs::metadata(path) {
                Ok(meta) => println!(
                    "{}, exists with a file size of {} bytes.",
                    path.display(),
                    meta.len()
                ),
                Err(_) => eprintln!("Failed to get file metadata: {}", Error),
            },
        }
    } else {
        println!("{} does not exist", path.display());
    }
}
