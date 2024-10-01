 In Rust, you can use the `std::fs::metadata` function to get a metadata object for the given path. Then using this object you can check whether it is a file or directory by checking its type. Here's how your Golang code translates into Rust:

```rust
use std::fs;
use std::path::Path;

fn print_stat(p: &str) {
    match fs::metadata(p) {
        Ok(m) => { 
            if m.is_dir() {
                println!("{} is a directory", p);
            } else {
                println!("{} is a file", p);
            }
        },
        Err(e) => eprintln!("Error: {}", e),
    }
}

fn main() {
    print_stat("input.txt");
    print_stat("/input.txt");
    print_stat("docs");
    print_stat("/docs");
}
```

Please note that in Rust, if a file or directory doesn't exist it will raise an error at compile-time, not at runtime. If you want to check the existence of files and directories before using them you should use `std::fs::metadata` with a `Result` pattern matching to handle the case where metadata isn't available (which would happen if either the file or directory doesn't exist).
