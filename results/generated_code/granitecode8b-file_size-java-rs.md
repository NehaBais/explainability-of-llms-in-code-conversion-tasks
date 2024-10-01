Here's the converted code from Java to Rust:
```rust
use std::fs;
use std::path::Path;
fn main() {
 let file_a = Path::new("file.txt");
 let metadata_a = fs::metadata(file_a).unwrap();
 println!("{:?}", metadata_a.len());
 let file_b = Path::new("/file.txt");
 let metadata_b = fs::metadata(file_b).unwrap();
 println!("{:?}", metadata_b.len());
}
```
This code uses the `std::fs` module to get information about files in Rust. The `Path` type is used to create a path to the file, and the `metadata()` function is used to get information about the file such as its size. The result is printed using the `println!()` macro.

