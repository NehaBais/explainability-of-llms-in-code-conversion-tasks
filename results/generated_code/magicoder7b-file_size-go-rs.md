 In Rust, you can use the `std::fs::metadata` function to get a file's metadata and then use the `.len()` method on the result to get its size in bytes. The code would look like this:

```rust
use std::fs;

fn print_file_size(f: &str) {
    match fs::metadata(f) {
        Ok(meta) => println!("{}", meta.len()),
        Err(e) => eprintln!("{:?}", e),
    }
}

fn main() {
    print_file_size("input.txt");
    print_file_size("/input.txt");
}
```

Please note that in Rust, to access files at the root of your filesystem you must run this program as a superuser or with sudo permissions due to security considerations. Trying to read files from the root directory without these privileges would typically result in an error, for example "Permission denied" or "No such file or directory".
