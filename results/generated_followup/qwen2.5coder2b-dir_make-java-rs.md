The error is caused by Rust's requirement that crate names must be valid Rust identifiers, which do not include dots or other special characters. 

To fix this, we need to change the name of our crate to something that does not include dots.

```rs
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

This will compile without errors and achieve the desired functionality.
