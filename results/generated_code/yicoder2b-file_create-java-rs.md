The equivalent code in Rust would be:

```rust
use std::fs;

fn main() {
    let dir = if let Ok(_) = fs::create_dir("docs") {
        Some("/docs/".to_string())
    } else {
        None
    };
    if let Some(path) = &dir {
        println!("{}", path);
    }

    let file = if fs::File::new(&*path!["output.txt"]).is_dir() {
        Some(fs::File::new(&*path!["output.txt"]).dup())
    } else {
        None
    };
    if let Some(file) = &file {
        println!("{}", file);
    }
}
```
Here are some things to note about this code:
1. We use `fs` module in Rust for file system operations.
2. In Rust, the path separator is `/` not `\`. So, when we do `File::new()` it will create the directory if it does not exist yet, else it will panic.
3. `path!["output.txt"]` is used to construct the file paths. This is equivalent of the `${}` operator in Java. 
4. Rust's `fs::create_dir("docs")` creates a directory if it does not exist yet. If it exists, it returns an error.
5. The if let syntax allows us to handle errors gracefully and print their respective messages.
