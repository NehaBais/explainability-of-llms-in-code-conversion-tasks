The equivalent code in Rust would be:

```rust
use std::fs;
use std::path::Path;

fn main() {
    let file_path = Path::new("input.txt");
    match fs::metadata(file_path) {
        Ok(metadata) => println!("{}", metadata.len()),
        Err(e) => println!("Error: {}", e),
    }

    let root_file_path = Path::new("/input.txt");
    match fs::metadata(root_file_path) {
        Ok(metadata) => println!("{}", metadata.len()),
        Err(e) => println!("Error: {}", e),
    }
}
```

Please note that the Rust version of this code is using the `std::fs` and `std::path::Path` modules to handle file operations and paths, respectively. The `fs::metadata()` function returns a `Result` type which contains either a `Ok` variant containing metadata about the file or an `Err` variant that may contain various kinds of errors such as the file not being found.

Also note, that Rust's `println!` macro requires a trailing comma if you want to print a single item. However, in this case we are printing multiple items separated by commas, which is different from how printf works in C.
