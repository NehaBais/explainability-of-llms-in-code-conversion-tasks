Here is the equivalent code in Rust:

```rust
use std::fs;
use std::path::Path;

fn create_file<P: AsRef<Path>>(filename: P) {
    match fs::File::create(filename.as_ref()) {
        Ok(_) => println!("file {} created!", filename.as_ref().to_string_lossy()),
        Err(e) => eprintln!("{}", e),
    }
}

fn create_dir<P: AsRef<Path>>(dir_name: P) {
    match fs::DirBuilder::new().create(dir_name.as_ref()) {
        Ok(_) => println!("directory {} created!", dir_name.as_ref().to_string_lossy()),
        Err(e) => eprintln!("{}", e),
    }
}

fn main() {
    create_file("input.txt");
    create_file("/input.txt");
    create_dir("docs");
    create_dir("/docs");
}
```

Please note that Rust doesn't have a "root" equivalent for file creation like Go. Therefore, creating a directory in the root will depend on whether your program has the required permissions to do so. Running this code might require elevated privileges.

Additionally, remember that Rust uses Result<T, E> to handle recoverable errors such as IO operations. In case of an error, fs::File::create and fs::DirBuilder::new().create return a Result enum which we match on in the create_file and create_dir functions. If the operation fails (e.g., if you don't have write permissions for the directory), it will print the error message to stderr.
