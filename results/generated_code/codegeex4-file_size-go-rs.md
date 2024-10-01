In Rust, the standard library does not provide a direct method for getting the size of a file like in Golang. However, you can use std::fs::metadata() function to get metadata about a file and then call the len() method on it to get the file size.

Here's your Golang code translated into Rust:

```rust
use std::fs;
use std::io;

fn print_file_size(file_path: &str) -> io::Result<()> {
    match fs::metadata(file_path).and_then(|metadata| metadata.len()) {
        Ok(size) => println!("{}", size),
        Err(err) => eprintln!("Error: {}", err),
    }
    Ok(())
}

fn main() -> io::Result<()> {
    print_file_size("input.txt")?;
    print_file_size("/input.txt")?;

    Ok(())
}
```

This code will do the same thing as your Golang code: it will get and print the size of "input.txt" file located in both the current working directory, and the root of your filesystem.
