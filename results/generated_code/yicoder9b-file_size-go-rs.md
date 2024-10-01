Here is the equivalent Rust code for your Golang program: 

```rust
use std::fs::metadata;
use std::path::Path;

fn print_file_size(f: &str) {
    if let Ok(meta) = metadata(&Path::new(f)) {
        println!("{}", meta.len());
    } else {
        eprintln!("Failed to get file info for {}", f);
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt"); 
}
```

In this Rust code:
- We're importing the `std::fs::metadata` function, which gets metadata for a file or directory.
- We're importing the `std::path::Path` module to construct a PathBuf structure from a string slice (which we use to create an instance of `f`).
- We're using pattern matching with `if let Ok(meta) = ...` to either get metadata and continue or output error message if file does not exist.
