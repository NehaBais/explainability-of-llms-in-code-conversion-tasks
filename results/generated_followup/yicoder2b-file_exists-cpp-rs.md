This problem seems to be related to C++/Rust version compatibility and usage of filesystem library in Rust. In C++, we don't have a direct method like `fs::File::read` or `fs::FsEntry::symlink_to_dir_entry` to handle the same task, so it's not possible to convert this code to Rust. However, this kind of operation is also possible in Rust using the std filesystem crate.

The error message "If you're trying to build a new `File` consider using one of the following associated functions: File::open, File::create, File::create_new" suggests that there might be an issue with the misuse of method names or the existence of these methods in Rust.

This is because `fs::read` reads the content from the file, while we need to check if a directory exists or not. These operations are opposite from each other and cannot be used interchangeably in the code you provided.

That being said, here is an example of how you could achieve similar functionality in Rust using the 'std' filesystem crate:
```rust
use std::path::PathBuf;
use std::fs;

fn file_exists(p: &str) {
    let p = PathBuf::from(p);
    match fs::read_dir(&p) {
        Ok(_) => match fs::symlink_to_dir_entry(&p.into()) {
            Some(direntry) if direntry.is_directory() {
                println!("{} is a directory", p);
            } else {
                let size = direntry.len();
                println!("exists with a file size of {} bytes.", size);
            }
        }
    };
}

fn main() {
    file_exists("input.txt");
    file_exists("zero_length.txt");
    // We can pass absolute path also as the method does not depend on file system root
    file_exists("/docs/input.txt");
    file_exists("/docs/zero_length.txt");
}
```
Please note that this code should be run in a `main()` function and Rust version must be 1.8 or above to compile the filesystem crate properly.
