 To convert the given C++ code to Rust, we will use the `std::fs` module from the Rust standard library. The equivalent functionality in Rust can be achieved using the `create_dir_all` function from `std::fs`. Here's how you can implement this in Rust:

```rust
use std::env;
use std::fs;
use std::io;
use std::path::PathBuf;

fn main() {
    let args: Vec<String> = env::args().collect();
    if args.len() != 2 {
        eprintln!("usage: {} <path>", args[0]);
        return;
    }

    let path_to_create: PathBuf = PathBuf::from(&args[1]);

    if fs::metadata(&path_to_create).is_ok() {
        return;
    }

    match fs::create_dir_all(&path_to_create) {
        Ok(_) => {}
        Err(e) => {
            eprintln!("couldn't create directory: {}", e);
            return;
        }
    }
}
```

### Explanation:
1. **Command Line Arguments**: We collect command line arguments using `env::args()`. The first argument is the program name, and the second is the path to the directory we want to create.
2. **Path Initialization**: Convert the second argument from a string slice to a `PathBuf` object.
3. **Check Existence**: Use `fs::metadata` to check if the directory already exists. If it does, the program returns successfully without creating anything.
4. **Create Directory**: Attempt to create the directory using `fs::create_dir_all`. If this fails (e.g., due to a missing parent directory), an error is caught and reported.
5. **Error Handling**: Use `match` to handle potential errors from `fs::create_dir_all`.

This Rust code mirrors the functionality of the provided C++ code, ensuring cross-platform compatibility as much as possible within the constraints of the standard library.
