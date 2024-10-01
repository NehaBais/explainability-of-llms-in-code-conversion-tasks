You can convert the given C++ code to Rust using the `std::fs` module. The equivalent Rust implementation would be:

```rust
use std::env;
use std::fs;

fn main() {
    let args: Vec<String> = env::args().collect();

    if args.len() != 2 {
        eprintln!("usage: mkdir <path>");
        std::process::exit(-1);
    }

    let path_to_create = &args[1];

    match fs::create_dir_all(path_to_create) {
        Ok(_) => (),
        Err(e) => {
            eprintln!("couldn't create directory: {}", e);
            std::process::exit(-1);
        }
    }
}
```

This Rust code does the following:

- It uses the `std::env` module to get command-line arguments.
- It checks that exactly one argument is provided (the path to create), and if not, it prints an error message and exits with status code `-1`.
- It calls the `fs::create_dir_all` function to create a directory at the specified path. If successful, the function returns `Ok(())`, and if it encounters an error (like failing to create some directories along the way), it prints an error message and exits with status code `-1`.
