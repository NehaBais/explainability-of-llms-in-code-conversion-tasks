In Rust, the `std::fs` module provides file manipulation functions similar to those in Golang's `os` package. Here's how we can rewrite the Golang code into Rust:

```rust
use std::fs;
use std::env;

fn main() {
    let path = env::current_dir().unwrap();

    // In the current working directory
    fs::rename("input.txt", "output.txt").expect("Failed to rename file");
    fs::rename("docs", "mydocs").expect("Failed to rename directory");

    // At root of filesystem
    fs::rename(&path.join("input.txt"), &path.join("output.txt"))
        .expect("Failed to rename file at root");
    fs::rename(&path.join("docs"), &path.join("mydocs"))
        .expect("Failed to rename directory at root");
}
```

In the Rust version, we first use the `env` module from the standard library to obtain the current working directory and then perform the renames. The `expect` function is used to handle any potential errors that may occur during the file/directory rename operations. Note: This code assumes that the user has permission to perform these actions.

Please replace "path" with the actual path of your project or use the current_dir() method from the env module as per your requirement. 

Please note this is just a basic example and you can extend it according to your needs. For more complex operations like copying, moving, removing etc., there are similar functions in Rust's std::fs module as well.

