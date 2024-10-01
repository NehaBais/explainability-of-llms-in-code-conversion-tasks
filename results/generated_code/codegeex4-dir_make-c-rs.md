In Rust, you can achieve the same functionality using the `std::fs` and `std::path` modules. The `create_dir_all` function in the `std::fs` module recursively creates all missing directories along a given path.

Here is how you could translate your C code into Rust:

```rust
use std::env;
use std::ffi::OsStr;
use std::fs::{self, DirBuilder};
use std::os::unix::prelude::*;
use std::process;

fn main() {
    let args: Vec<String> = env::args().collect();

    if args.len() != 2 {
        eprintln!("usage: {} <path>", args[0]);
        process::exit(1);
    }

    let path = &args[1];
    
    // Check if the path is a directory and if it exists, then create the missing directories
    match fs::metadata(path) {
        Ok(metadata) => {
            if metadata.is_dir() {
                println!("Directory {} already exists", path);
            } else {
                eprintln!("Cannot create directory {}: file exists with the same name", path);
                process::exit(1);
            }
        },
        Err(ref error) if error.kind() == std::io::ErrorKind::NotFound => {
            // The path does not exist, so we create it
            match DirBuilder::new().recursive(true).create(path) {
                Ok(_) => println!("Created directory {}", path),
                Err(err) => {
                    eprintln!("Failed to create directory {}: {}", path, err);
                    process::exit(1);
                }
            }
        },
        Err(error) => {
            eprintln!("An error occurred while checking the existence of {}: {}", path, error);
            process::exit(1);
        }
    }
}
```

### Explanation:
- The `env::args().collect()` collects command line arguments into a vector.
- We check if there are exactly two arguments (the program name and the directory to create).
- We use `fs::metadata` to determine the kind of file at the provided path.
  - If it's already a directory, we report success.
  - If the path does not exist (`std::io::ErrorKind::NotFound`), we attempt to create it recursively with `DirBuilder`.
- The function exits with an appropriate message and status code on errors.

This Rust program should work similarly across different operating systems, as long as the underlying filesystem supports recursive directory creation.
