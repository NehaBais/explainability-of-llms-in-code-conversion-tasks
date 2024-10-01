```rust
extern crate std;

use std::fs::{self, Metadata};
use std::path::PathBuf;
use std::process::exit;

fn file_exists(path: &str) {
    let path = PathBuf::from(path);
    println!("{}", path.display());
    if let Ok(metadata) = fs::metadata(&path) {
        if metadata.is_dir() {
            println!(" is a directory");
        } else if metadata.len() == 0 {
            println!(" exists but is empty");
        } else {
            println!(" exists with a file size of {} bytes", metadata.len());
        }
    } else {
        println!(" does not exist");
    }
}

fn main() {
    let home_dir = dirs::home_dir().expect("Could not find home directory");
    file_exists(home_dir.join("input.txt").to_str().unwrap());
    file_exists(home_dir.join("zero_length.txt").to_str().unwrap());

    if cfg!(target_family = "windows") {
        file_exists(r"Z:\input.txt");
        file_exists(r"Z:\zero_length.txt");
    } else {
        file_exists("/root/input.txt");
        file_exists("/root/zero_length.txt");
    }
}
```
