The equivalent code in Rust would be as follows:

```rust
use std::fs;

fn main(args: Vec<String>) {
    if args.len() != 2 {
        println!("usage: mkdir <path>");
        std::process::exit(1);
    }

    let path_to_create = &args[1];

    if fs::metadata(path_to_create).is_ok() {
        return;
    }

    match fs::create_dir_all(&path_to_create) {
        Ok(_) => (),
        Err(e) => {
            eprintln!("couldn't create directory: {}", path_to_create);
            std::process::exit(1);
        }
    }
}
```
This Rust function does exactly the same thing as the C++ version - it takes a single string representing a path, checks if that path already exists, and creates all missing parent directories if needed. If successful, it exits with code 0 (in Rust, equivalent to `return 0;` in C++). If any errors occur during the process, it prints an error message to stderr and exits with code 1.
