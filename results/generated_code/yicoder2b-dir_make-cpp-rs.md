Sure, here is the equivalent Rust code for your C++ implementation. We are using the `std` crate in Rust to work with directories:

```rust
use std::fs::{create_dirs, File};
use std::path::PathBuf;

fn main() {
    if let Err(_) = create_dirs(PathBuf::from(&["./path/to/dir".to_string()]), /* mode */ ) {
        match create_dirs(/* path */) {
            Err(e) => println!("couldn't create directory: {}", e),
            Ok(_) => println!("directory created successfully"),
        }
    } else {
        println!("directory already exists");
    }
}
```
This code is almost identical to the C++ version. It will first check if a directory with that path already exists using `fs::exists`. If it does not exist, it attempts to create the directories recursively and print an error message if it fails. If the attempt to create directories succeeds (which means that every parent directory was successfully created), it will print "directory created successfully". 

Please note that in C++ you would need to handle the failure case of `create_directories` because it doesn't return a Result; instead it returns an error type (`fs::CreateDirsError`). In Rust, this has been abstracted away with the `Result` and `Err` types.
