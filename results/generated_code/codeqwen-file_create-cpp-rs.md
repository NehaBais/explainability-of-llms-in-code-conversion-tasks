In Rust, the equivalent code would be:

```rust
use std::fs;

fn main() {
    let current_dir = ".".to_string();
    let root_dir = "/".to_string();

    // Create an empty file "output.txt" in the current directory and root directory
    for dir in [current_dir, root_dir] {
        match fs::File::create(format!("{}/output.txt", dir)) {
            Ok(_) => println!("Created 'output.txt' in {}", dir),
            Err(e) => eprintln!("Error creating 'output.txt' in {}: {}", dir, e),
        }
    }

    // Create an empty directory "docs" in the current directory and root directory
    for dir in [current_dir, root_dir] {
        match fs::create_dir(format!("{}/docs", dir)) {
            Ok(_) => println!("Created 'docs' in {}", dir),
            Err(e) => eprintln!("Error creating 'docs' in {}: {}", dir, e),
        }
    }
}
```

This Rust code creates an empty file named "output.txt" and a directory named "docs" at the current working directory and root directory ("/") respectively. If any of the operations fail for some reason, it will print an error message to stderr. 

Note that Rust's `std::fs` module uses Result-based APIs, so we can handle errors using match statements or?/let chaining syntax.
