Sure, here is the equivalent Rust code for your Go program. This script will check if `input.txt` and `docs` exist at both the current working directory and the root of the filesystem.

```rust
use std::fs;
use std::path::Path;

fn print_stat(p: &str) {
    match fs::metadata(p).unwrap() {
        Ok(metadata) => {
            if metadata.is_dir() {
                println!("{} is a directory", p);
            } else {
                println!("{} is a file", p);
            }
        },
        Err(e) => {
            eprintln!("Error: {}", e);
        }
    }
}

fn main() {
    let current_working_dir_path = std::env::current_dir().unwrap();
    print_stat(current_working_dir_path.to_str().unwrap());
    print_stat(format!("{}/input.txt").to_string().as_str());
    print_stat(format!("{}/docs/").to_string().as_str()); // Note the trailing slash for directories
}
```
In this Rust code:

- We use `fs::metadata` to get information about a path. The `.unwrap()` method is used here because `fs::metadata` returns an `io::Result`.
- If the file or directory exists, we check if it's a directory using the `is_dir` method.
- If there's an error while checking metadata (e.g., due to I/O), we print the error message.
