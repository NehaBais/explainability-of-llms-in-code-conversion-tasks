The equivalent Rust code for the provided Go code is as follows:

```rust
use std::fs::{self, create_dir_all};
use std::path::PathBuf;

fn main() {
    let path = PathBuf::from("/tmp/some/path/to/dir");
    if !create_dir_all(&path).is_ok() {
        match create_dir_all(&path) {
            Err(_e) => (), // Don't panic if the directory already exists
            Ok(()) => println!("Directory created successfully"),
        }
    } else {
       println!("Directory already exists");
    }
}
```
Please note that Rust has a different way to create directories using `create_dir_all`. This function also creates missing intermediate subdirectories in the given path if they don't exist yet. 
If you want to use other permissions, you can specify them as the second argument of `create_dir_all`, for example: `0750` (same as "0770" with less permission).
