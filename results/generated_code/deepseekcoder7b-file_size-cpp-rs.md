Here is the Rust equivalent of your C++ code. For file operation in Rust, we use `std::fs` module's `metadata()` and `len()` functions to get information about a file:

```rust
use std::fs;
use std::io::Error;

fn print_file_size(filename: &str) {
    match fs::metadata(filename) {
        Ok(meta) if meta.is_file() =>
            println!("Size of file {} is {} bytes.", filename, meta.len()),
        Ok(_) => eprintln!("{} is not a regular file", filename),
        Err(error) => eprintln!("Couldn'<｜begin▁of▁sentence｜>t get file size {}: {}", filename, error),
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
```

This Rust code does the same thing as your C++ code: it tries to get information about a file with provided filename and prints out its size in bytes or error if something goes wrong, like when there is no such file at provided path. The difference here is that for getting full path of current working directory we use `std::env::current_dir()` function instead of directly providing "/input.txt". 

Please note that the second call to `print_file_size("/input.txt")` won't work as you expected because absolute paths do not start with a slash ("/"), they are relative to root directory ("/"). This is how filesystems in Unix-based systems usually operate, where "/" signifies root of the file system.

