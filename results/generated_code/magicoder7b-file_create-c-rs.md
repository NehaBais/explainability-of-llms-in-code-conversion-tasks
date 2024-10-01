 The equivalent code in Rust would be:

```rust
use std::fs;
use std::io;

fn main() -> io::Result<()> {
    fs::OpenOptions::new().write(true).create_new(true).open("output.txt")?;
    fs::create_dir_all("docs")?;

    let mut path = std::env::current_dir()?;
    path.push("output.txt");
    fs::OpenOptions::new().write(true).create_new(true).open(&path)?;
    
    path.pop(); // remove "output.txt" from path
    path.push("docs");
    fs::create_dir_all(&path)?;

    Ok(())
}
```
Please note that in Rust, there is no standardized way of setting file permissions unlike in C and therefore I did not include it as in the original code. To set file permissions in Rust you would have to use platform-dependent methods (like `chmod` on Unix-based systems), which are more complex and may require using additional crates.
