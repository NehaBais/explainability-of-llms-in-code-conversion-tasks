```rust
use std::fs;
use std::io::{self, BufReader};
use std::path::{Path, PathBuf};

fn file_size(path: &Path) -> io::Result<u64> {
    fs::metadata(path).map(|m| m.len())
}

fn main() {
    let input_file_path = PathBuf::from("input.txt");
    match file_size(&input_file_path) {
        Ok(size) => println!("Size of file {} is {} bytes.", input_file_path.display(), size),
        Err(err) => eprintln!("Error: {}", err),
    }

    let root_dir_path = PathBuf::from("/");
    match file_size(&root_dir_path) {
        Ok(size) => println!("Size of directory {} is {} bytes.", root_dir_path.display(), size),
        Err(err) => eprintln!("Error: {}", err),
    }
}
```
In Rust, the use of `io` module allows reading files and directories. In the code above, file size is calculated using `file_size` function which returns a Result type. The function uses `fs::metadata` to get metadata for the path provided. If this succeeds, it then reads the length of bytes from the metadata object returned by `len`. If there is an error in reading or calculating file size, it will return an Err.
