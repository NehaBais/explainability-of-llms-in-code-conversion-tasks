Sure, here's the Rust code that achieves the same result as the C++ code:
```
use std::env;
use std::fs;
fn main() {
 let path = env::args().nth(1).expect("Please provide a directory name");
 if fs::metadata(&path).is_err() {
 if fs::create_dir_all(&path).is_ok() {
 println!("Directory created successfully");
 } else {
 eprintln!("Error creating directory: {}", path.display());
 }
 } else {
 println!("Directory already exists");
 }
}
```
This code uses the `env` and `fs` modules in Rust to achieve the same functionality as the C++ code. It first gets the path name from the command line arguments, then checks if the directory already exists using `fs::metadata`. If it does not exist, it creates the directory and any missing parents using `fs::create_dir_all`, and prints a success message if the operation is successful. If the directory already exists, it prints an error message indicating that the directory already exists.

