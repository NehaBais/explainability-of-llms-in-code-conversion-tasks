The equivalent code in Rust would be:

```rust
use std::fs;

fn rename_file(oldname: &str, newname: &str) -> Result<(), std::io::Error> {
    fs::rename(oldname, newname)
}

fn test(type_of_item: &str, oldname: &str, newname: &str) {
    match rename_file(oldname, newname) {
        Ok(_) => println!("The following {} called {} was renamed as {}.", type_of_item, oldname, newname),
        Err(_) => println!("The following {} called {} could not be renamed into {}.", type_of_item, oldname, newname),
    }
}

fn main() {
    test("file", "input.txt", "output.txt");
    test("file", "/input.txt", "/output.txt");
    test("directory", "docs", "mydocs");
    test("directory", "/docs/", "/mydocs/");
}

```

Here, we use the `std::fs` module to handle file operations in Rust. The `rename_file` function tries to rename a file from `oldname` to `newname`. If successful, it returns Ok(()), otherwise it returns an error (Result type). 

The `test` function takes in the type of item ("file" or "directory"), old name and new name. It prints out whether the operation was successful or not using match statement. The print statements use placeholder arguments (`{}`) to replace with values that are passed into the function.
