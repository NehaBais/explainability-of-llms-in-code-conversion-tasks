Below is the equivalent Rust code. It uses the `fs` crate to interact with the filesystem and error handling features of Rust for exception handling.

```rust
use std::env;
use std::fs;
use std::path::{Path, PathBuf};

fn main() {
    let args: Vec<String> = env::args().collect();
    
    if args.len() != 2 {
        eprintln!("usage: {} <path>", args[0]);
        process::exit(1);
    }
    
    let path_str = &args[1];
    let _ = mkdir_parents(PathBuf::from(path_str));
}

fn mkdir_parents(start: PathBuf) -> Result<(), Box<dyn std::error::Error + 'static>> {
    let mut path = start;
    
    while let Some(parent) = path.parent() {
        match fs::create_dir(&parent) {
            Ok(_) => return Ok(()), // Success
            Err(e) if e.raw_os_error().unwrap() == 17 { 
                // error code 17 is "file exists" which means the directory already exist, so we exit successfully
            } else {
                return Err(Box::new(e)); // Some other Error happened
            }
        };
        
        path = *parent;
    }
    
    Ok(())}
```
This script will create all necessary directories to the given argument in Rust, equivalent to your C++ script. If the directory already exists, it simply returns without error. It uses `fs::create_dir()` function which creates a new directory and its parents if they do not exist yet. This function can return an error if the parent directory does not have write permissions for example.

