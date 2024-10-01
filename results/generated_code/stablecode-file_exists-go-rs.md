In Rust, the equivalent code would look like this:

```rust
use std::fs;
use std::path::Path;

fn print_stat(p: &str) {
    match fs::metadata(p) {
        Ok(m) if m.is_dir() => println!("{} is a directory", p),
        Ok(m) if !m.is_dir() => println!("{} is a file", p),
        Err(e) => eprintln!("Error: {}", e)),
    }
}

fn main() {
    print_stat("input.txt");
    print_stat("/input.txt");
    print_stat("docs");
    print_stat("/docs");
}
```

This Rust program does the same thing as your Golang code: It verifies whether a file called `input.txt` and a directory called `docs` exist in the current working directory and root directory respectively. 

Note that this Rust code will only work properly if the filesystem permissions are set correctly for the files/directories you're testing for.
