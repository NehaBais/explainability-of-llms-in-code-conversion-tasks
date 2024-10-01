Sure! Here's the equivalent Rust code:
```rust
extern crate std;
use std::env;
use std::fs;
fn main() {
 let size1 = fs::metadata("input.txt").unwrap().len();
 let size2 = fs::metadata("/input.txt").unwrap().len();
 println!("Size of input.txt in current working directory: {} bytes", size1);
 println!("Size of /input.txt in file system root: {} bytes", size2);
}
```
This code uses the `fs` module from the Rust standard library to get the metadata of both files and then use the `.len()` method to get their sizes. The `unwrap()` method is used to handle any errors that may occur during this process. The results are printed out using the `println!` macro.

