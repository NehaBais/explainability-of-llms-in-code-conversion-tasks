Sure, here is how you can write that in Rust:

Rust has a built-in library `std::fs` that provides the functionality to read from and write to files. We'll use it to do exactly what we need - get the size of a file or folder on your filesystem. Let's first define a function to get the size of a file in a directory:

```rust
use std::fs;

fn main() {
    let size = match fs::File::read_dir("input.txt") {
        Ok(_) => return,
        Err(e) if e.kind() == std::io::ErrorKind::NotFound 
            => println!("The file does not exist: {}", e),
        Err(e) => println!("Error reading the file: {}", e),
    };
    let mut content = String::new();
    match fs::read_file("input.txt") {
        Ok(mut contents) => content = String::from_utf8(contents).unwrap(), // read file and put it into a string.
        Err(e) => println!("Error reading the file: {}", e),
    } 
    // now you can get size of your string if needed
}
```

But unfortunately `fs::File::read_dir` can't get size of a file or directory. It only provides information about directory itself (like number of subdirectories, etc). It doesn't return file size. So if you want to get the size of file `input.txt` in current working directory, you will need to read it first and then calculate its size manually.

But this will not give you an exact size since String contains content of file as bytes. For more precise operation consider to use `std::io::Stdin` or `std::process::Command`. It allows running system commands and reading their output, which could provide the file size. 

Please note that Rust doesn't directly support filesystem operations as high level language does. You need to deal with them using Rust's standard library.
