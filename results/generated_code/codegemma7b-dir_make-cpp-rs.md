```rust
use std::fs;
use std::path::Path;

fn mkdir_p(path: &str) {
    let path = Path::new(path);

    if path.exists() {
        return;
    }

    if let Err(e) = fs::create_dir_all(path) {
        panic!("Failed to create directory: {}", e);
    }
}

fn main() {
    let args: Vec<String> = std::env::args().collect();

    if args.len() != 2 {
        println!("Usage: mkdir <path>");
        return;
    }

    let path = args[1].clone();

    mkdir_p(&path);

    println!("Directory created: {}", path);
}
```

**Explanation:**

* The `mkdir_p` function takes a path string as input.
* It converts the string into a `Path` object using `Path::new()`.
* It checks if the directory already exists using `path.exists()`.
* If the directory doesn't exist, it calls `fs::create_dir_all()` to create it recursively.
* If an error occurs, it panics with an error message.
* In the `main` function, it parses the command-line arguments and calls `mkdir_p()` with the provided path.

**Note:**

* The `panic!` macro is used to handle errors during directory creation.
* The `fs::create_dir_all()` function creates all intermediate directories as needed.
* The code is cross-platform, as it uses the `fs` module, which is available on most platforms.
