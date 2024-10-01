Sure, here's the equivalent Rust code for the given JavaScript code:
```
use std::fs::{metadata, File};
use std::io::Read;
fn main() {
 let input_file = metadata("input.txt").unwrap();
 let root_input_file = metadata("/input.txt").unwrap();
 println!("Input file size: {}", input_file.len());
 println!("Root input file size: {}", root_input_file.len());
}
```
This code uses the `metadata` function from the `std::fs` module to get the metadata of the input.txt file in the current working directory and the /input.txt file in the file system root. The length of each file is then printed to the console.

