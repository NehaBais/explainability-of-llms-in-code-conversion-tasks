```rust
use std::fs;
use std::path::PathBuf;

fn create_directory(path: &str) -> Result<(), String> {
    let pathbuf = PathBuf::from(path);
    
    if pathbuf.exists() {
        Ok(())
    } else {
        fs::create_dir_all(&pathbuf).map_err(|e| e.to_string())
    }
}

fn main() {
    match create_directory("C:/parent/test") {
        Ok(_) => println!("path successfully created"),
        Err(e) => eprintln!("{}", e),
    }
}
```
The Rust code above achieves the same functionality as the Java code. It uses the `fs::create_dir_all` function to create any missing parents of the directory specified by the path. If the directory already exists, it returns Ok() and prints a success message. If there is an error during the process (for example, if the parent directory does not exist or there is a permission issue), it returns an Err containing the error message. The Rust code also handles errors elegantly using match statements.
