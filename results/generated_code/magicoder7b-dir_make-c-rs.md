 The equivalent code in Rust would be:

```rust
extern crate std;
use std::fs;
use std::path::Path;

fn create_dirs(path: &str) -> Result<(), std::io::Error> {
    let parts: Vec<&str> = path.split("/").collect();
    
    if parts.len() == 1 && !parts[0].is_empty() {
        fs::create_dir(path)?;
        return Ok(());
    }

    let mut parent_path: String = "".to_string();
    for part in &parts[0.. parts.len() - 1] {
        if !part.is_empty() {
            parent_path += "/";
            parent_path += part;
            
            match fs::create_dir_all(&parent_path) {
                Ok(_) => {}, // directory already exists or can be created
                Err(e) => return Err(e),  // error creating the directories
            }
        } else if !parts.first().unwrap().is_empty() {
            parent_path += "/";
        }
    }
    
    fs::create_dir(&path)?;
    Ok(())
}

fn main() -> Result<(), std::io::Error> {
    let path = "./path/to/dir";
    create_dirs(path)
}
```
This Rust code does the following:
1. Splits the provided `path` by "/" into parts, stores them in a vector `parts`. 
2. If there is only one part (which could be an empty string if the path starts with /), it tries to create that directory and returns Ok(()) or Err() accordingly.
3. For multiple directories, for each part, it appends it to parent_path with "/". It also checks if parts[0] exists, in which case it simply continues. Otherwise, it calls `fs::create_dir_all` on the constructed path up until that point and returns Ok(()) or Err() accordingly.
4. Finally, for the last part (which is non-empty), it appends "/" to parent_path and the part itself, then tries to create this directory using fs::create_dir(). 

Please note that `std::io::Error` can be replaced by any suitable error type in your application.
