Rust has a standard library for filesystem operations, but it is not as high-level as the C++ <filesystem> header and does not have a direct alternative to file_size function. Here's an equivalent Rust code using std::fs module:
```rust
use std::io::Error;
use std::fs::File;
use std::path::Path;

fn print_file_size(filename: &str) -> Result<(), Error> {
    let file = File::open(filename);
    match file {
        Ok(mut file) => {
            let size = file.metadata()?.len();
            println!("Size of file {} is {} bytes.", filename, size);
            Ok(())
        },
        Err(error) => Err(error),
    }
}

fn main() {
    if let Err(e) = print_file_size("input.txt") {
        eprintln!("{}", e);
    };
    if let Err(e) = print_file_size("/input.txt") {
        eprintln!("{}", e);
    }
}
```
This Rust code does the same thing as your C++ code: it tries to open a file and get its size via metadata() method, which returns the actual length of the file in bytes. If any error occurs during this operation (like when trying to access a file that doesn't exist), an instance of std::io::Error is returned.

Please make sure you have the `std` feature enabled in your Rust project:

[dependencies]
rustc-std-workspace-common = "1.53.0"
