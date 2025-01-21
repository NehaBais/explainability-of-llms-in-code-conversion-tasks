use std::env;
use std::fs;
use std::io::Error;

fn handle_error(e: &Error) {
    println!("{}", e);
}

fn main() {
    let dir = match env::current_dir() {
        // Get current directory
        Ok(path) => path,
        Err(e) => {
            handle_error(&e);
            return;
        }
    };

    // Create "output.txt" in the current working directory and docs folder
    fs::File::create(&dir.join("output.txt")).unwrap_or_else(|e| handle_error(&e));
    fs::File::create(&dir.join("docs/file.txt")).unwrap_or_else(|e| handle_error(&e));
}
