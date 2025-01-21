 The error is occurring because Rust's `fs::File::open()` method returns a `Result<File, Error>`. If there is an error (like file not found), it will return an `Err`, not a `File`. This means the program can't unwrap a `File` from the result.

To fix this, we should handle potential errors gracefully using `match`:

```rs
use std::fs;

fn main() {
    match fs::File::open("file.txt") {
        Ok(mut fileA) => println!("{} B", fs::metadata(&fileA).unwrap().len()),
        Err(_e) => println!("Could not open file"),
    }

    match fs::File::open("/file.txt") {
        Ok(mut fileB) => println!("{} B", fs::metadata(&fileB).unwrap().len()),
        Err(_e) => println!("Could not open root file"),
    }
}
```

In this version of the program, we use `Ok` to handle successful operations and `Err` to handle errors. If an error is encountered while opening a file, it prints out "Could not open file" or "Could not open root file". Otherwise, it gets the size of the opened file using `fs::metadata` method.
