Rust doesn't have a direct equivalent to Python's `os.rename()` function, but you can use the `std::fs::rename()` function instead. Here is your converted Rust code:

```rust
use std::fs;

fn main() {
    let new_path = "mydocs";

    // Rename current directory
    fs::rename("docs", new_path).unwrap();

    // Rename input file
    fs::rename("input.txt", "output.txt").unwrap();
}
```
This Rust code does the same thing as your Python code: it renames an `input.txt` file to `output.txt`, and it also renames a `docs` directory to `mydocs`. 

It's worth noting that in Rust, you'll get an error if you try to rename a file or directory that doesn't exist. To handle this situation, you could add some error handling code (e.g., using the `Result` type and its associated methods)).
