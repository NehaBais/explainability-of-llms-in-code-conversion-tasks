The error is because Rust does not support creating missing parent directories directly as C++'s `mkdir -p`. The above code uses `fs::create_dir_all` which attempts to create each directory in the path string one by one. If the last directory fails to create, it returns Err and prints out the error message.

The fix is to use `std::fs::create_dir_all_with_error` instead of `fs::create_dir_all`.

Rewritten code:

```rs
use std::{fs, io};

fn main() {
    if let Some(args) = std::env::args().skip(1).collect::<Vec<String>>() {
        let path_to_create: &str = args[0].as_str();
        
        match fs::create_dir_all_with_error(path_to_create) {
            Ok(_) => (),
            Err(e) => println!("couldn't create directory: {}", e),
        }
    } else {
        println!("usage: mkdir <path>");
    }
}
```

The corrected code is shown in the fenced code block.
