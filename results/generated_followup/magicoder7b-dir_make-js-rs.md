 The error "main function not found" is due to the fact that the Rust compiler expects a main() entry point for the program to start running. This is what initiates the execution of the compiled Rust code. In this case, there isn't one because we're treating this as a module rather than an executable.

To fix it, simply add `fn main(){}` at the beginning of your file:
```rs
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

fn main() {
    mkdirp("./path/to/dir");
}
```
This will now work as expected.
