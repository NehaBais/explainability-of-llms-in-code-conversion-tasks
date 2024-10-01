The equivalent code in Rust would be:

```rust
use std::fs;

fn print_file_size(f: &str) {
    match fs::metadata(f) {
        Ok(m) => println!("{}", m.len()),
        Err(e) => eprintln!("Error: {}", e),
    };
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
```

Here, we use Rust's `std::fs::metadata()` function to get the metadata of a file, including its size. We then print out this size using `println!()`. If there is an error during this process (like the file doesn't exist), it will be printed out instead.
