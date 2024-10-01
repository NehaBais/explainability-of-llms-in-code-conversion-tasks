Sure, here's the equivalent Rust code:
```rust
extern crate libc;
use std::fs::metadata;
fn main() {
 let metadata1 = metadata("input.txt").unwrap();
 println!("{}", metadata1.len());
 let metadata2 = metadata("/input.txt").unwrap();
 println!("{}", metadata2.len());
}
```
This code uses the `libc` crate to call the `stat()` function from the C standard library, which retrieves information about a file such as its size. The `metadata()` function in the Rust std::fs module returns a Result containing either the metadata of the file or an error if the file does not exist.

