The equivalent Rust code for your JavaScript code would look like this:
```rust
use std::fs;

fn get_file_size(path: &str) -> Result<u64, std::io::Error> {
    let metadata = fs::metadata(path)?;
    Ok(metadata.len())
}

fn main() -> Result<(), std::io::Error> {
    let current_dir = std::env::current_dir()?;
    let root_dir = std::fs::canonicalize("/")?;

    let file_size_1 = get_file_size(&format!("{}/input.txt", current_dir.display()))?;
    let file_size_2 = get_file_size(&format!("{}/input.txt", root_dir.display()))?;

    println!("Size of input.txt in the current directory: {} bytes", file_size_1);
    println!("Size of input.txt in the root directory: {} bytes", file_size_2);

    Ok(())
}
```
Note that this Rust code uses `std::fs` for interacting with the file system and `std::io::Error` for handling errors. The `get_file_size` function retrieves the size of a file by getting its metadata and returning its length. In the main function, we first get the current directory using `std::env::current_dir` and then get the canonicalized path of the root directory using `std::fs::canonicalize`. We then call `get_file_size` for both files and print their sizes.
