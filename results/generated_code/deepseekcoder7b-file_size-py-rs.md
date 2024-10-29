Rust doesn't have a direct equivalent of Python's `os` module, but it does provide another way to interact with the file system using its standard library. Here is how you can achieve the same functionality in Rust:

Please note that accessing files outside of your project (e.g. at root level) requires special permissions and may not be allowed by all filesystems.

```rust
use std::fs;
use std::io::Error;

fn main() {
    let path = "input.txt";
    
    match fs::metadata(path) {
        Ok(size) => println!("Size of file '{}' is {} bytes", path, size.len()),
        Err(error) => match error.kind() {
            Error::NotFound => println!("File '{}' not found.", path),
            _ => eprintln!("Error accessing '{}': {}", path, error),
        },
    }

    // To access the file in root directory, you need to include full path. 
    // For example, if your user is "username" on Linux/macOS and the file is located at "/home/username/input.txt".
    let root_path = "/home/username/input.txt";
    
    match fs::metadata(root_path) {
        Ok(size) => println!("Size of file '{}' is {} bytes", root_path, size.len()),
        Err(error) => match error.kind() {
            Error::NotFound => println!("File '{}' not found.", root_path),
            _ => eprintln!("Error accessing '{}': {}", root_path, error),
        },
    }
}
```
Replace `"/home/username/input.txt"` with the actual path to your file. This Rust code will print out the size of both files if they exist. If not, it would inform that either file is missing. For security reasons, you might have to run this program as an administrator or root user on Linux/macOS to be able to access files in the root directory. 

Please ensure Rust's `std::io::Error` has covered all possible error types and you can handle them accordingly. The above code only covers two common cases of file not being found and general IO errors, but these are generic examples that may need to be adapted based on your exact use case or specific requirements.

