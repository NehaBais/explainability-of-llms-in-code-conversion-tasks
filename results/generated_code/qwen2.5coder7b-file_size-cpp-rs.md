Here's how you can convert the given C++ code to Rust:

```rust
use std::fs;
use std::io;

fn print_file_size(filename: &str) {
    match fs::metadata(filename) {
        Ok(metadata) => {
            let size = metadata.len();
            println!("Size of file {} is {} bytes.", filename, size);
        },
        Err(err) => eprintln!("{}", err),
    }
}

fn main() -> io::Result<()> {
    print_file_size("input.txt")?;
    print_file_size("/input.txt")?;
    Ok(())
}
```

This code does the same thing as your C++ code. It tries to get metadata for a file with `fs::metadata(filename)`. If it succeeds, it prints out the size of the file using `println!()`. If there's an error, it prints it out using `eprintln!()`.

The `?` operator at the end of each function call will propagate any errors that happen to the caller. It means "if this function fails, return its error immediately and stop executing the current function". This simplifies handling errors in Rust, compared to C++'s `try-catch`. 

Also note that this code assumes that the file is readable and that it exists. If you want to verify if a file exists before trying to get its size, you can use `fs::metadata().is_ok()` method instead of `fs::metadata()`.
