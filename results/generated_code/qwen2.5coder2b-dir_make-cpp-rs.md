The equivalent code in Rust is as follows:

```rust
use std::{fs, io};

fn main() {
    if let Some(args) = std::env::args().skip(1).collect::<Vec<String>>() {
        let path_to_create: &str = args[0].as_str();
        
        match fs::create_dir_all(path_to_create) {
            Ok(_) => (),
            Err(e) => println!("couldn't create directory: {}", e),
        }
    } else {
        println!("usage: mkdir <path>");
    }
}
```

This code first collects the command line arguments into a vector. It then uses `fs::create_dir_all` to attempt to create all parent directories up to, but not including, the last directory in the path. If this function completes successfully (returns Ok), it prints nothing. If there is an error (returns Err), it prints out the error message.
Please note that for this task, Rust does not support creating missing parent directories directly as C++'s `mkdir -p`. The above code uses `fs::create_dir_all` which attempts to create each directory in the path string one by one. If the last directory fails to create, it returns Err and prints out the error message.
