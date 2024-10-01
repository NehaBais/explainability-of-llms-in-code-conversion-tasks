
Here's the Rust equivalent of the JavaScript code you provided:
```
use std::fs::File;
use std::io::prelude::*;

fn main() {
    let file_path = "input.txt";
    let absolute_file_path = "/c/input.txt";

    // Verify the size of a file in the current working directory
    let current_dir_size = get_file_size(file_path);
    println!("Size of file in current working directory: {}", current_dir_size);

    // Verify the size of a file in the file system root
    let absolute_dir_size = get_file_size(absolute_file_path);
    println!("Size of file in file system root: {}", absolute_dir_size);
}

fn get_file_size(file_path: &str) -> u64 {
    let mut file = match File::open(file_path) {
        Ok(f) => f,
        Err(e) => panic!("Error opening file {:?}: {}", file_path, e),
    };

    // Get the size of the file in bytes
    let size = file.metadata().unwrap().len();
    println!("File size: {}", size);
    size as u64
}
```
In this Rust code, we use the `std::fs` module to interact with the file system and the `std::io::prelude` module to read from files. We also define a function called `get_file_size()` that takes a file path as an argument and returns the size of the file in bytes as a u64 value.

In the main function, we first declare two variables: `file_path` and `absolute_file_path`. `file_path` is a relative file path to a file in the current working directory, while `absolute_file_path` is an absolute file path to a file in the file system root.

We then use the `get_file_size()` function to get the size of both files and print their sizes to the console.
