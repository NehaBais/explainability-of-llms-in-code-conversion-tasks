 Rust doesn't have a built-in library equivalent to C++'s `<filesystem>`, so we need to use a third-party crate (`std::fs` in this case) for file system manipulation. Here is how you can achieve the same functionality as in the given C++ code in Rust:

```rust
use std::fs;

fn main() {
    let args: Vec<String> = std::env::args().skip(1).collect();
    
    if args.len() != 1 {
        println!("usage: mkdir <path>");
        return;
    }

    let path_to_create = &args[0];

    if fs::metadata(path_to_create).is_ok() {
        return;
    }

    match fs::create_dir_all(path_to_create) {
        Ok(_) => (),
        Err(e) => {
            eprintln!("couldn't create directory: {}", path_to_create);
            eprintln!("{}", e);
            std::process::exit(-1);
        }
    }
}
```

This script will work cross-platform as it uses the standard library of Rust to interact with the file system. Also, note that unlike C++, Rust does not have a concept of returning an error in a function. Instead, we use `Result` type to handle errors and `panic!()` macro to abort execution when an error occurs.
