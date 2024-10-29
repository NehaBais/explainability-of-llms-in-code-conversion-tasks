To achieve this in Rust, you can use the `std::fs` module to get file size information, which is similar to using FileSystemObject in JavaScript in terms of functionality. Here's how it would look like:

```rust
use std::fs;
use std::io::Error;

fn main() {
    match fs::metadata("input.txt") {
        Ok(size) => println!("Size of 'input.txt' in current working directory: {} bytes", size.len()),
        Err(error) => println!("Failed to get file info for 'input.txt'. Error: {}", error),
    }
    
    match fs::metadata("/full/path/to/root/c:/input.txt") {  // replace "/full/path/to/root" with the actual path of root
        Ok(size) => println!("Size of 'c:/input.txt' in filesystem root: {} bytes", size.len()),
        Err(error) => println!("Failed to get file info for 'c:/input.txt'. Error: {}", error),
    }
}
```
Please note, Rust doesn't have a direct equivalent of JavaScript's `Scripting.FileSystemObject`. 
The above code will work under Unix-like systems (Linux and Mac) but it won't work for windows paths like 'c:/input.txt'. You would need to use the full path, which can be obtained using something similar to what is done in `fso.GetFile('c:/input.txt').Path` in JavaScript. The reason being Rust has a different approach on how it handles file system operations.

