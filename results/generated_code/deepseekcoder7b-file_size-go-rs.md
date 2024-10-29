The equivalent Rust code would be as follows:

Please note, the root directory in a file system differs based on the operating systems. It could be `/` for Linux and macOS, but for Windows it's typically something like `C:\`. You might need to pass different paths depending upon the OS you are using. 

```rust
extern crate rust;
use std::fs;
use std::io::Error;

fn print_file_size(f: &str) {
    let stat = match fs::metadata(f) {
        Ok(stat) => stat,
        Err(error) => {
            eprintln!("{}", error);
            return;
        }
    };
    
    println!("{}", stat.len());
}

fn main() {
    print_file_size("input.txt");
    // Use your root directory here as an example, it will likely be different for each operating system
    print_file_size("/path/to/your/root/directory/input.txt"); 
}
```
Make sure you have the `metadata` method available in fs module of std which is used to get file metadata.

