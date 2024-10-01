Here is the equivalent Rust code for your Golang program: 

```rust
use std::fs::rename;
use std::path::Path;

fn main() {
    let source = Path::new("input.txt");
    let dest = Path::new("output.txt");
    if source.exists() { rename(source,dest).unwrap(); } 

    let source_dir = Path::new("docs");
    let dest_dir = Path::new("mydocs");
    if source_dir.exists() { rename(source_dir,dest_dir).unwrap(); }

    // For renaming files and directories in the filesystem root, you would 
    // need to specify their absolute paths, for instance:
    let source = Path::new("/root/input.txt");
    let dest = Path::new("/root/output.txt");
    if source.exists() { rename(source,dest).unwrap(); } 

    let source_dir = Path::new("/root/docs");
    let dest_dir = Path::new("/root/mydocs");
    if source_dir.exists() { rename(source_dir,dest_dir).unwrap(); }
}
```
Remember to include the `std::fs` module from standard library and use the `rename` function from it. Also note that we're checking if files or directories exist before renaming them as a safety measure, since `rename()` can fail if the source doesn't exist. We also have to unwrap() potential error values returned by `rename()`, which is generally not recommended in production code because it can panic on error and you should handle errors explicitly.
