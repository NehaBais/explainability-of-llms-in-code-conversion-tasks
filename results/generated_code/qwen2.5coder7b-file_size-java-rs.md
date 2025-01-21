Here is how you can convert the given Java code to Rust. Note that in Rust, we use `std::fs::File` along with `std::io` for reading and getting the metadata of files.

```rust
use std::fs;
use std::io;

fn main() -> io::Result<()> {
    let file_a = fs::metadata("file.txt")?;
    let size_a = file_a.len();
    println!("{}, B", size_a);

    let file_b = fs::metadata("/file.txt")?;
    let size_b = file_b.len();
    println!("{}, B", size_b);

    Ok(())
}
```

This Rust code does the same thing as your Java code:

1. It imports necessary modules from `std`.
2. In the main function, it attempts to get metadata of the files "file.txt" and "/file.txt". The `?` operator is used here for error handling which is common in Rust.
3. If getting the file metadata succeeds, it extracts its size using the `len()` method and prints it.

Remember that this will fail if there isn't a file named "file.txt" in the current directory, or if the root path "/file.txt" does not exist. You may want to include error handling code for these cases as needed.
