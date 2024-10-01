Sure, here is the equivalent code in Rust:

```rust
use std::fs;
use std::path::PathBuf;

fn file_exists(path: &str) {
    let p = PathBuf::from(path);
    match fs::File::read_dir(&p) {
        Ok(_) => match fs::FsEntry::symlink_to_dir_entry(&p.into()) {
            Some(direntry) if direntry.is_directory() {
                println!("{} is a directory", p);
            } else {
                let size = direntry.len();
                println!("exists with a file size of {} bytes.", size);
            }
        }
        Err(_) => println!("does not exist"),
    };
}

fn main() {
	file_exists("input.txt");
	file_exists("zero_length.txt");
	file_exists("/docs/input.txt");
	file_exists("/docs/zero_length.txt");
}
```
This Rust code does the same job as the C++ code. It checks if a file or directory exists at the specified path, and prints detailed information such as whether it's a directory. If not, it prints the size of the file in bytes.
