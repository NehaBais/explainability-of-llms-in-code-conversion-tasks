Sure, here's how you can convert the JavaScript code to Rust:

```rust
use std::fs::{create_dir_all, DirBuilder};
use std::path::{Path, PathBuf};

fn mkdirp(p: &str, cb: impl FnOnce(Result<(), std::io::Error>) -> ()) {
    let path = PathBuf::from(p);
    if path.exists() {
        cb(Ok(()));
        return;
    }

    let parent_path = path.parent().unwrap();
    if !parent_path.exists() {
        mkdirp(&parent_path.to_string_lossy(), cb);
    }
    
    create_dir_all(path).unwrap_or_else(|err| {
        cb(err);
    });
}

fn main() {
    let path = "./path/to/dir";
    mkdirp(path, |result| match result {
        Ok(_) => println!("Directory created successfully"),
        Err(e) => eprintln!("Error: {}", e),
    });
}
```

Note that this code will use the `std::fs` module from Rust which provides the necessary functions to interact with the file system. The `PathBuf` and `DirBuilder` are used to manage paths and handle directories. If the directory already exists, it is not re-created; instead, an `Ok(())` callback is called. If there's an error while creating the directory or a parent directory, the `cb` function is called with the respective error. This code will create the directory if it doesn't exist and handle any errors that may occur.
