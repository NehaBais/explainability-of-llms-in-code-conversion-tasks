Here's the Rust code that implements the same functionality as the C++ code you provided:
```
use std::fs;
use std::io;
fn main() {
 let args: Vec<_> = std::env::args().collect();
 if args.len() != 2 {
 println!("usage: mkdir <path>");
 return;
 }

 let path_to_create = &args[1];

 match fs::create_dir_all(path_to_create) {
 Ok(()) => {},
 Err(e) => {
 println!("couldn't create directory: {}", e);
 return;
 }
 }
}
```
In this Rust code, we first collect the command-line arguments into a vector of strings. We then check if there are exactly two arguments (the program name and the path to create). If not, we print the usage message and return.
Next, we call `fs::create_dir_all`, which creates all the necessary directories in the given path. If it succeeds, we do nothing. If it fails, we print an error message and return.
Note that this code uses Rust's standard library functionality for file system operations, so it should work equally well on different platforms.

