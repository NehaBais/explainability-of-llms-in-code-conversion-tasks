Here is the equivalent Rust code for renaming files and directories as per the given Python script:

```rust
use std::io;
use std::path::Path;

fn main() -> io::Result<()> {
    // Renames file in current directory.
    rename("input.txt", "output.txt")?;

    // Renames a directory in the current directory.
    rename("docs", "mydocs")?;

    // Renames file at root of filesystem. (Requires elevated permissions)
    let root = Path::new("/");
    let input_path = root.join("input.txt");
    let output_path = root.join("output.txt");
    rename(&input_path, &output_path)?;

    // Renames a directory at the root of the filesystem. (Requires elevated permissions)
    let docs_path = root.join("docs");
    let mydocs_path = root.join("mydocs");
    rename(&docs_path, &mydocs_path)?;

    Ok(())
}

fn rename<T: AsRef<Path>, U: AsRef<Path>>(src: T, dst: U) -> io::Result<()> {
    std::fs::rename(src.as_ref(), dst.as_ref())
}
```
This Rust program uses the `std::fs::rename` function to perform file and directory renaming operations in a similar fashion as Python's os module does with the `os.rename()` method. The rename function is wrapped into another function named "rename" for better understanding of what it does inside the main function. 

Please note that running this program requires appropriate permissions, especially when trying to perform renaming operations at the root level of the filesystem. Also keep in mind, `std::fs::rename` doesn't work exactly like `os.rename()`, so if the destination already exists it will fail.
