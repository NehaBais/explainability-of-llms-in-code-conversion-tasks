Rust code to create a directory and its missing parents using mkdirp from the std::fs module:

```rust
use std::path;
use std::fs;

fn main() {
    let path = "./path/to/dir";
    let resolved_path = path::resolve(path);

    fs::mkdir(resolved_path, |er| {
        if er.is_none() {
            println!("Directory {} created successfully.", resolved_path);
        } else {
            match er.code {
                Some("ENOENT") => {
                    // The directory doesn't exist. Make its parent and try again.
                    let parent_dir = path::dirname(resolved_path);
                    mkdirp(parent_dir, |er| {
                        if er.is_none() {
                            println!("Parent directory {} created successfully.", resolved_path);
                        } else {
                            println!("Error creating parent directory: {}", er);
                        }
                    });
                },
                _ => {
                    // In the case of any other error, something is borked.
                    println!("Error creating directory: {}", er);
                }
            }
        }
    });
}

fn mkdirp(path: &str, cb: impl FnOnce(Option<String>) -> ()) {
    let resolved_path = path::resolve(path);

    fs::mkdir(resolved_path, |er| {
        if er.is_none() {
            cb(None);
        } else {
            match er.code {
                Some("ENOENT") => {
                    // The directory doesn't exist. Make its parent and try again.
                    let parent_dir = path::dirname(resolved_path);
                    mkdirp(parent_dir, |er| {
                        if er.is_none() {
                            cb(None);
                        } else {
                            println!("Error creating parent directory: {}", er);
                        }
                    });
                },
                _ => {
                    // In the case of any other error, something is borked.
                    println!("Error creating directory: {}", er);
                }
            }
        }
    });
}
```

You can also use the fs::create_dir() function to create a directory and its missing parents as follows:

use std::path;
use std::fs;

fn main() {
    let path = "./path/to/dir";
    let resolved_path = path::resolve(path);

    fs::create_dir(resolved_path, |er| {
        if er.is_none() {
            println!("Directory {} created successfully.", resolved_path);
        } else {
            match er.code {
                Some("ENOENT") => {
                    // The directory doesn't exist. Make its parent and try again.
                    let parent_dir = path::dirname(resolved_path);
                    fs::create_dir(parent_dir, |er| {
                        if er.is_none() {
                            println!("Parent directory {} created successfully.", resolved_path);
                        } else {
                            println!("Error creating parent directory: {}", er);
                        }
                    });
                },
                _ => {
                    // In the case of any other error, something is borked.
                    println!("Error creating directory: {}", er);
                }
            }
        }
    });
}
