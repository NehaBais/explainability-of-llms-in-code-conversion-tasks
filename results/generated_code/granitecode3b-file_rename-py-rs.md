Sure, here's the Rust code that achieves the same task as the Python code:
```rust
use std::io;
use std::path::{Path, PathBuf};

fn main() -> io::Result<()> {
 let current_dir = std::env::current_dir()?;
 let root_dir = Path::new("/");

 rename("input.txt", "output.txt")?;
 rename(&root_dir.join("input.txt"), &root_dir.join("output.txt"))?;

 rename("docs", "mydocs")?;
 rename(&root_dir.join("docs"), &root_dir.join("mydocs"))?;

 Ok(())
}

fn rename<P: AsRef<Path>>(from: P, to: P) -> io::Result<()> {
 std::fs::rename(from, to)
}
```
The Rust code uses the `std::env::current_dir()` function to get the current working directory and the `std::path::Path` trait to join paths together. The `rename` function takes two paths as input and calls the `std::fs::rename` function to rename the files. The `main` function then calls the `rename` function twice, once in the current working directory and once in the filesystem root.

