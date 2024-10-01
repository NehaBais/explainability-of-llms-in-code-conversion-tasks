 Rust has the `std::fs::rename` method for this purpose. However, unlike Golang's `os.Rename`, which can operate on both relative and absolute paths, in Rust you need to provide an absolute path to a file or directory. 
Here is your code translated to Rust:

```rust
use std::fs;

fn main() {
    // current working directory
    fs::rename("input.txt", "output.txt").expect("Unable to rename the file");
    fs::rename("docs", "mydocs").expect("Unable to rename the file");
    
    // filesystem root
    fs::rename("/input.txt", "/output.txt").expect("Unable to rename the file");
    fs::rename("/docs", "/mydocs").expect("Unable to rename the file");
}
```
This Rust code will perform a similar operation as your Go program, but it is crucial to note that the `/` prefix denotes an absolute path. Rust follows this convention for paths unlike Go which uses relative paths without a prefix (except `/root/path`, where `/` indicates root).
