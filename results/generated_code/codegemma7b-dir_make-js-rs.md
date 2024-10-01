```rust
use std::fs;
use std::path::Path;

fn mkdirp(p: &str) -> std::io::Result<()> {
    let path = Path::new(p);

    if path.exists() {
        return Ok(());
    }

    if let Some(parent) = path.parent() {
        mkdirp(parent.to_str().unwrap())?;
    }

    fs::create_dir_all(path)?;

    Ok(())
}
```

**Explanation:**

* The function takes a single path string as input.
* It resolves the path using `Path::new`.
* If the directory already exists, it returns `Ok(())`.
* If the directory doesn't exist, it recursively calls itself on the parent directory.
* It then creates the directory using `fs::create_dir_all`.

**Example Usage:**

let path = "./path/to/dir";
mkdirp(path).expect("Failed to create directory");

**Note:**

* The function works cross-platform.
* It handles the `ENOENT` error, which indicates that the directory doesn't exist.
* It recursively creates parent directories if they don't exist.
