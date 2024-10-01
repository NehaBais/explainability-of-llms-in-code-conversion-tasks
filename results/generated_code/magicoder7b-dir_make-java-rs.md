 Rust has the `std::fs` module which contains various functions and methods for file system operations, including directory creation (`create_dir_all`). Here is the equivalent code in Rust:

```rust
use std::fs;

fn create_directory(path: &str) {
    match fs::create_dir_all(path) {
        Ok(_) => println!("Path successfully created"),
        Err(e) => eprintln!("Error creating path: {}", e),
    }
}

fn main() {
    create_directory("C:/parent/test");
}
```

In this code, `create_dir_all` will attempt to create all parent directories in the given path as needed. The result of the operation is a `Result`, which is either an `Ok` value if the directory was created successfully or an `Err` containing the error message if there were any issues creating the directories. 

Rust's error handling, including the use of `match` to handle different possible outcomes from a function call, is very different than Java's try/catch mechanism but still enables you to deal with potential errors in a similar way.
