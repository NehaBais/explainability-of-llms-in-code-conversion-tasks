Rust has a different way of handling file operations, as Rust focuses on safety and performance. However, one can use the `std::fs` module to handle similar tasks in Rust. Below is how you would convert your JavaScript code into Rust: 

Please note that due to Rust's design philosophy, it doesn't have a direct equivalent of Javascript's "root" directory ("/"). Instead of the root directory, we use `std::env::current_dir()` which will return the path of the current working directory. You can then append or prepend to this path as required.

```rust
use std::fs;
use std::io::Error;
use std::env;

fn handle_error(e: &Error) {
    println!("{}", e);
}

fn main() {        
    let dir = match env::current_dir() {  // Get current directory
        Ok(path) => path,
        Err(e) => {
            handle_error(&e);
            return;
        }
    };
    
    // Create "output.txt" in the current working directory and docs folder
    fs::File::create(&dir.join("output.txt")).unwrap_or_else(|e| {
         handle_error(&e)
    }); 
    fs::File::create(&dir.join("docs/file.txt")).unwrap_or_else(|e| {
        handle_error(&e)
    });  
    
}
```
Note: Rust doesn't support mkdir, so we are using create for creating files and directories. If the directory or file already exists, it will return an error which you can handle accordingly. This code creates a file named "output.txt" in the current working directory and "file.txt" inside a folder called "docs". Rust does not directly allow to specify root ("/") for file operations like Javascript does with its fs module, so instead we use `env::current_dir()` which gives us the path of the current working directory.

