 The equivalent code in Rust would look like this:

```rust
use std::fs;
use std::path::{Path, PathBuf};

fn mkdirp(p: &str) {
    let pb = PathBuf::from(p);
    
    if fs::metadata(&pb).is_err() {
        let parent_dir = pb.parent().unwrap(); 
        mkdirp(parent_dir.to_str().unwrap()); // Recursively call on the parent directory
        
        match fs::create_dir(&pb) {
            Ok(_) => println!("Directory created successfully"),
            Err(e) => eprintln!("Error creating directory: {}", e),
        }
    } else {
        println!("Directory already exists");
    }
}
```
This Rust implementation uses the std library's fs module to perform filesystem operations. The code will attempt to create the requested directory and its parent directories if they do not exist. If any error occurs during this process (like trying to create a file at an existing location), it is printed to stderr, otherwise a success message is printed to stdout.
