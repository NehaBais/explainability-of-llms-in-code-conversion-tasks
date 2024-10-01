In Rust there's a standard library function to create directories, but unlike Node.js it does not have recursive mode and it will return an error if any of the parent directories do not exist. 

Here is a simple implementation using the 'std::fs' module:

```rust
use std::{ fs, path::Path };

fn mkdirp(p: &str) -> Result<(), std::io::Error> {
    let p = Path::new(p); 
    if p.exists() {
        Ok(()) // Return successful if the directory already exists
    } else {
        fs::create_dir_all(&p) // Create all directories in path recursively
    }
}

fn main() -> Result<(), std::io::Error> {
   mkdirp("./path/to/dir")?; // This will create any missing directories in path
   Ok(()) 
}
```
This code should work on most platforms where Rust can be run, as 'std::fs' is a part of standard library and has the same behavior across platforms.
