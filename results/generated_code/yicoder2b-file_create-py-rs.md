Sure, here is the equivalent Rust code for your Python script.
```rust
use std::fs;

fn create(directory: &str) {
    let output = fs::File::new(&format!("{}/output.txt", directory)).expect("Could not create output file");
    fs::OpenOptions::new()
        .write(true)
        .create(true)
        .open_for_append(&format!("{}/{}", directory, "docs"))
        .expect("Could not create docs directory");
}

fn main() {
    create(".");  // current directory
    create("/"); // root directory
}
```
In the Rust code:
- We define a function `create` that accepts a string reference to the directory in which we want to create files and directories. It does as follows - opens "output.txt" file, creates it if it didn't exist yet, and then appends data into it. Creates "docs" directory if it doesn't already exist. 
- `main` function is where our program starts. We call the `create` function twice, once for the current directory (dot) and once for the root directory (slash).
