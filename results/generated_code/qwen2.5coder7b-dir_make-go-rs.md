In Rust, you can use the `std::fs` module to achieve the same functionality as the Go code.

Here is a simple conversion of the provided Go code snippet into Rust:

```rust
use std::fs;
use std::path::Path;

fn main() {
    let dir_path = Path::new("/tmp/some/path/to/dir");
    match fs::create_dir_all(dir_path) {
        Ok(_) => println!("Directory created successfully."),
        Err(e) => eprintln!("Failed to create directory: {}", e),
    }
}
```

This Rust code will try to create the directory and its parents if they don't exist. If it succeeds, it will print "Directory created successfully." otherwise, it will print an error message.

Please note that `fs::create_dir_all` returns a `Result`, which is a common way in Rust for functions that might fail to indicate success or failure. 

Also, like in Go, the path should be properly escaped or provided as a string slice (`&str`). In this case it's hardcoded but you can use any valid directory path you want. 

Finally, note that error handling with `Result` is more expressive and flexible than the direct return of an integer status code in Rust, which makes Rust safer and easier to debug compared to Go.
