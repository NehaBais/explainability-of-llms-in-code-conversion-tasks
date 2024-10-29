Here is the equivalent Rust code for your C++ task using `std::fs` module in Rust for file operations and `dirs` crate to access filesystem root directory. 

Make sure you have the dirs crate available in your dependencies in your cargo.toml or add it to your project by adding this line:

[dependencies]
dirs = "3.0.2"

Here is how you can do that:

```rust
use std::fs;
use dirs;

fn main() {
    // Create an empty file in the current directory
    let _ = fs::File::create("output.txt");
    
    // Get root path and create a new empty file at filesystem root
    if let Some(root) = dirs::home_dir() {
        let path = root.join("output.txt");
        let _ = fs::File::create(&path);
        
        // Create an empty directory in the current directory
        let _ = fs::DirBuilder::new().recursive(true).write(true).create("docs");
    
        // Get root path and create a new directory at filesystem root
        if let Some(root) = dirs::home_dir() {
            let path = root.join("docs");
            let _ = fs::DirBuilder::new().recursive(true).write(true).create(&path);
        }
    }
}
```
Please note that in Rust, errors are handled with `Result` types and they must be unwrapped or explicitly ignored to prevent a panic at runtime. In this example I chose to ignore them for simplicity but it's not recommended for production code! 

Also file operations can fail due to permissions issues or insufficient disk space, so you should handle these cases in your production-grade applications.

