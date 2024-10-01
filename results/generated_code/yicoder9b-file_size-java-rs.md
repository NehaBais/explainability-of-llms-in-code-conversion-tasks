In Rust you can use the `std::fs::metadata()` function from the standard library to get information about files such as size and modified time. Here is how this could be translated:

```rust
use std::fs::metadata;

fn main() -> std::io::Result<()> {
    let file_a = metadata("file.txt")?;
    println!("{} B", file_a.len());

    // In Rust, you can't just directly use the root directory path like "/file.txt" 
    // because it depends on the operating system and might not be universally valid.
    // It is always safer to get the current working directory and then join with the filename.
    let cwd = std::env::current_dir()?;
    let file_b = metadata(cwd.join("/file.txt"))?;
    println!("{} B", file_b.len());

    Ok(())
}
```
Note that the Rust way of dealing with files is a little bit different from Java:
- Instead of creating `File` objects and calling methods on them like in Java, we use functions from `std::fs` module to interact with files.
- To get size information, we call the `len()` method which returns the size of the file in bytes. In Rust you must handle possible errors that may occur during this operation (for example if the file does not exist). That's why the function is marked as `std::io::Result` - it either gives you a result (`Ok(some_number)`) or an error (`Err(an_error)`).
- In Rust, to get size of files in the root directory, we use the current working directory and join with the filename using `join()` function from `std::path::Path`. This will make sure that it works correctly on all platforms (Unix vs Windows).
