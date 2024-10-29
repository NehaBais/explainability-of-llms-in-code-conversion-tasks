Rust has a different way of handling file I/O compared to C, so the equivalent Rust code for your provided C code may look somewhat different. Here it is:

```rust
use std::fs::metadata;
use std::io::Error;

fn main() {
    match metadata("input.txt") {
        Ok(size) => println!("{}", size.len()),
        Err(error) => eprintln!("Unable to get file info: {}", error),
    }
    
    match metadata("/input.txt") {
        Ok(size) => println!("{}", size.len()),
        Err(error) => eprintln!("Unable to get file info: {}", error),
    }
}
```
This Rust code uses the `metadata` function from the standard `fs` library's `File` trait which returns metadata about a file. It prints the length of the file (or its size) if it succeeds, or an error message otherwise. Note that this will work for both Unix-like systems and Windows, provided the filesystem is case-preserving (i.e., "file", "File" are considered different names).

