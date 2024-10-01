Here's the converted code from JavaScript to Rust:
```rust
use std::fs;
fn main() {
 let result1 = fs::write("output.txt", "");
 match result1 {
 Ok(_) => println!("File created successfully"),
 Err(e) => println!("Error creating file: {}", e),
 }
 let result2 = fs::write("/output.txt", "");
 match result2 {
 Ok(_) => println!("File created successfully"),
 Err(e) => println!("Error creating file: {}", e),
 }
 let result3 = fs::create_dir("docs");
 match result3 {
 Ok(_) => println!("Directory created successfully"),
 Err(e) => println!("Error creating directory: {}", e),
 }
 let result4 = fs::create_dir("/docs");
 match result4 {
 Ok(_) => println!("Directory created successfully"),
 Err(e) => println!("Error creating directory: {}", e),
 }
}
```
This code uses the `std::fs` module in Rust to create a file and directory. The `write()` function is used to create the file, while the `create_dir()` function is used to create the directory. Both functions return a `Result` type, which can either contain the success value or an error value. The `match` statement is used to handle the result and print a message accordingly.

