The equivalent code in Rust would be:

```rust
use std::fs;
use std::io;

fn print_file_size(filename: &str) -> io::Result<()> {
    match fs::metadata(&filename).and_then(|m| m.len()) {
        Ok(size) => println!("Size of file {} is {} bytes.", filename, size),
        Err(e) => eprintln!("Error occurred: {}", e),
    }
    Ok(())
}

fn main() -> io::Result<()> {
    print_file_size("input.txt");
    print_file_size("/input.txt");
    Ok(())
}
```
This code uses the `std::fs` module to get file metadata and then gets the length of the file. This is similar to how C++ used the `std::filesystem` library but in Rust it's a bit different as Rust has different error handling practices than C++. 

Note: You will need to replace "input.txt" with an actual file present at that location in order to test this code. "/input.txt" assumes that input.txt is located at root of your filesystem which might not be the case for many users.
