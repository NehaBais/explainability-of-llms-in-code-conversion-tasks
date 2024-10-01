In Rust the `std::fs` module provides functions for reading and writing files and directories. The `std::process` module is used to access the current working directory.

Here's how you can convert this Java code into Rust:

```rust
use std::{ fs, process };

fn rename_file(oldname: &str, newname: &str) -> bool {
    fs::rename(oldname, newname).is_ok()
}

fn test(type_str: &str, oldname: &str, newname: &str) {
    println!("The following {} called {} was renamed as {} :{}.", type_str, oldname, newname, rename_file(oldname, newname));
}

fn main() {
    test("file", "input.txt", "output.txt");
    let curr_dir = process::current_dir().expect("Failed to get current directory");
    test(&format!("{}{}", curr_dir.to_str().unwrap(), "\\input.txt"), &format!("{}{}", curr_dir.to_str().unwrap(), "\\output.txt"));
    test("directory", "docs", "mydocs");
    let curr_dir = process::current_dir().expect("Failed to get current directory");
    test(&format!("{}{}",curr_dir.to_str().unwrap(), "\\docs"), &format!("{}{}",curr_dir.to_str().unwrap(), "\\mydocs"));
}
```
The `rename` function in Rust's filesystem module (`std::fs`) takes two arguments: the current filepath and a new filepath. If successful, it will replace the original path with the new one and return `Ok(())`. The `is_ok()` method checks if the operation was successful by checking whether the returned value is an `Ok` variant or not.

The `format!()` macro is used to interpolate the current directory's path into the filepath, which is then passed to the `test` function. 

Please note that this code requires appropriate permissions and may behave differently based on your system’s settings. It also assumes that the files/directories exist when it tries to rename them.
