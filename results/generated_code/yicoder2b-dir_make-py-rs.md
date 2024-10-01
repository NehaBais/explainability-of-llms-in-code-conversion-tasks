Sure, here is how you can implement the function in Rust - 

```rust
use std::fs;
use std::io::Write;
use std::process;

fn mkdirp(path: &str) {
    // Create a directory and any missing parents. If already exists, return successfully.
    if let Err(_e) = fs::create_dir_recursive(path) { 
        match fs::read_dir_meta(path) {
            Ok(_m) => (),
            Err(ioerr) => match ioerr.kind() {
                fs::ErrorKind::Access => println!("Failed to access path: {}", &ioerr),
                fs::ErrorKind::NoPermissions => println!("No permissions to read directory: {}", &ioerr), 
                fs::ErrorKind::NotFound => (),
                other => println!("Some other error: {}", &ioerr),
            },
        };
    } else {
        match fs::read_dir_meta(path) {
            Ok(m) => println!("Directory created successfully at path: {}", m.path()),
            Err(ioerr) => match ioerr.kind() {
                fs::ErrorKind::Access => println!("Failed to access path: {}", &ioerr),
                fs::ErrorKind::NoPermissions => println!("No permissions to read directory: {}", &ioerr),
                fs::ErrorKind::NotFound => (), 
                other => println!("Some other error: {}", &ioerr),
            },
        };
    }
}
```
This function uses `std::fs` and `std::process` to create a directory and its parents if they do not exist. If it exists, the program is successful without errors. In case of failure (like permissions or other IO errors), appropriate error messages are printed. The function will work equally well on Windows as well as POSIX-compliant systems.
