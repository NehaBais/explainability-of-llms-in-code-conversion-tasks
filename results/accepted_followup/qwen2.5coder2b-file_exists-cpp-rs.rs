use std::fs;

fn file_exists(path: &std::path::Path) {
    println!("{}", path);
    match fs::metadata(path) {
        Ok(metadata) => {
            if metadata.is_dir() {
                println!(" is a directory");
            } else {
                let size = metadata.file_size();
                println!(" exists with a file size of {} bytes.", size);
            }
        }
        Err(e) => {
            eprintln!("Error: {}", e);
        }
    }
}

fn main() {
    // Current working directory
    file_exists(&std::path::Path::new("input.txt"));
    file_exists(&std::path::Path::new("zero_length.txt"));
    file_exists(&std::path::Path::new("docs/input.txt"));
    file_exists(&std::path::Path::new("docs/zero_length.txt"));

    // Filesystem root
    file_exists(&std::path::Path::new("/input.txt"));
    file_exists(&std::path::Path::new("/zero_length.txt"));
    file_exists(&std::path::Path::new("/docs/input.txt"));
    file_exists(&std::path::Path::new("/docs/zero_length.txt"));
}
