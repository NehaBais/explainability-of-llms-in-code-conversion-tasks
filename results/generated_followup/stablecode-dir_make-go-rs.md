The error is due to an unclosed delimiter `)`. The unexpected closing delimiter `}` occurs in lines 8, 11 respectively. 

To fix this issue, we need to add a closing parenthesis `)` after the print statement on line 8. Similarly, we will add a closing brace `}` at the end of the conditional block on line 10. This way, we can ensure that all delimiters are properly closed and there won't be any unexpected errors during execution.
```rust
use std::fs;
use std::path::PathBuf;

fn create_directory(path: &str) {
    let path = PathBuf::from(path);

    if let Err(e) = fs::create_dir_all(&path)) {
        eprintln!("Failed to create directory: {}", e));
        return;
    }

    println!("Directory created successfully at path: {:?}", path));
}

fn main() {
    let path = "./path/to/dir";
    create_directory(path);
}
```
