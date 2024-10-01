Sure, here's the Rust code that performs the same functionality as the C++ code:
```
extern crate std;
use std::fs;
fn main() {
 match fs::metadata("input.txt") {
 Ok(_) => println!("Size of file input.txt is {} bytes", fs::metadata("input.txt").unwrap().len()),
 Err(e) => eprintln!("Error: {}", e),
 };
 
 match fs::metadata("/") {
 Ok(_) => println!("Size of file /input.txt is {} bytes", fs::metadata("/input.txt").unwrap().len()),
 Err(e) => eprintln!("Error: {}", e),
 };
}
```
This code uses the `fs` module in Rust to get the metadata (size, modification time, etc.) of a file. It then prints out the size of the input.txt file in the current working directory and another one in the root directory.
Note that the `unwrap()` method is used here because metadata() returns an Result type, which can be either Ok(metadata) or Err(error). In this case, we only care about the Ok(metadata) case, so unwrap() is used to safely access the length property of the metadata object.

