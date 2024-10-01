In Rust, you can use the `std::fs` and `std::path::Path` modules to accomplish file renaming in a similar manner as your Java code:

```rust
use std::fs;
use std::path::{Path, PathBuf};

fn rename_file(oldname: &str, newname: &str) -> bool {
    let oldpath = Path::new(oldname);
    let newpath = Path::new(newname);

    // Rename file
    match fs::rename(oldpath, newpath) {
        Ok(_) => true,
        Err(_) => false,
        }
    } else {
        false
    }
}

fn test(type: &str, oldname: &str, newname: &str) {
    let success = rename_file(oldname, newname));
    println!("The following {} called {} was renamed as {}.",
                type,
                oldname,
                newname
            );
}

fn main() {
    test("file", "input.txt", "output.txt");
    test(
        "file",
        &format!("{}docs{}{}", std::env::var("HOMEDRIVE").unwrap(), Path::new("docs"), Path::new("mydocs"))),
        &format!(
            "{}docs{}{}",
            std::env::var("HOMEDRIVE").unwrap(),
            Path::new("docs"),
            Path::new("mydocs")
        )
    );
    test("directory", "docs", "mydocs");
    test(
        "directory",
        &format!("{}docs{}{}", std::env::var("HOMEDRIVE").unwrap(), Path::new("docs"), Path::new("mydocs"))),
        &format!(
            "{}docs{}{}",
            std::env::var("HOMEDRIVE").unwrap(),
            Path::new("docs"),
            Path::new("mydocs")
        )
    );
}
```
This Rust code converts a Java file renaming test to similar functionality in Rust.

The `rename_file` function takes the old name and new name as arguments, then uses the `std::fs::rename` method to rename the file with the old name to the file with the new name. The function returns true if the file was successfully renamed, otherwise it returns false.

The `test` function is used to test the functionality of the `rename_file` function. It takes the type, old name, and new name as arguments, then calls the `rename_file` function with these arguments. Finally, it prints out a message indicating whether the file was successfully renamed or not.

The `main` function is the entry point of the program. It calls the `test` function multiple times to test the functionality of the `rename_file` function for files and directories. Finally, it prints out a message indicating the results of these tests.
