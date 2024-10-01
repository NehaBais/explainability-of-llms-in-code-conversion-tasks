The equivalent code in Rust is:
```rust
use std::fs;

fn main() {
    match fs::create_dir_all("C:/parent/test") {
        Ok(_) => println!("path successfully created"),
        Err(e) => eprintln!("{}", e),
    }
}
```
This code creates a directory named "C:/parent/test", with any missing parents, if it doesn't exist yet. If the directory already exists, this function does nothing and returns `Ok(())`. It will return an error if there is a problem creating the directory or file.
