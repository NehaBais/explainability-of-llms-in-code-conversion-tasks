Sure! Here's the Rust code that achieves the same functionality as the C++ code:
```
use std::fs;

fn main() {
    fs::rename("input.txt", "output.txt").unwrap();
    fs::rename("docs", "mydocs").unwrap();
    fs::rename("/input.txt", "/output.txt").unwrap();
    fs::rename("/docs", "/mydocs").unwrap();
}
```
Note that in Rust, the `fs` module provides a safe and easy-to-use API for working with files and directories. The `rename` function takes two strings as arguments: the first is the path to the file or directory to be renamed, and the second is the new name of the file or directory.

In this case, we're using the `fs::rename` function to rename both "input.txt" and "docs" in the current working directory, as well as "/input.txt" and "/docs" in the filesystem root. The `unwrap()` method is used to handle any potential errors that may occur during the renaming process.

Also note that Rust does not have a concept of a "current working directory", so we don't need to worry about changing directories before performing the rename operation.
