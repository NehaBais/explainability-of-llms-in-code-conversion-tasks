The equivalent code in Rust would be:

```rust
use std::io;
use std::fs;

fn create_file(path: &str) {
    match fs::File::create(path) {
        Ok(_) => println!("Created file at {}", path),
        Err(error) => eprintln!("Problem creating the file: {:?}", error),
    }
}

fn create_dir(path: &str) {
    match fs::create_dir(path) {
        Ok(_) => println!("Created directory at {}", path),
        Err(error) => eprintln!("Problem creating the directory: {:?}", error),
    }
}

fn main() {
    let paths = vec![(".", "/"), ("./output.txt", "/output.txt"), ("./docs", "/docs")];

    for (path, root_path) in &paths {
        create_file(&format!("{}/{}", path, "output.txt"));
        create_file(root_path);
        create_dir(&format!("{}/{}", path, "docs"));
        create_dir(root_path);
    }
}
```

Note:
1. Rust does not have a built-in function for creating an empty file of size 0 bytes or creating an empty directory like JavaScript's fs.writeFile and fs.mkdir functions respectively.
2. In the main function, we are iterating over two paths, "." (current working directory) and "/" (root directory). For each path, we create an output.txt file, a docs directory and repeat this in both root and current working directories.
3. In Rust, error handling is done using `Result` type which represents either success (`Ok`) or failure (`Err`). The functions `fs::File::create` and `fs::create_dir` return a Result, so we use the `match` statement to handle possible errors.
4. Rust does not have an equivalent function to console.log for printing error messages. Instead, it uses eprintln! macro to print error messages to stderr.

Make sure to add `use std::path::Path;` at the top of your file if you're going to be using Path methods.
