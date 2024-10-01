Here's the equivalent Rust code for your C code snippet. The code includes two main function calls to check if "input.txt" is a regular file and if "docs" is a directory in the current working directory and one more pair of checks done for files and directories located at "/input.txt" and "/docs".

```rust
use std::fs;
use std::path::Path;

fn check_reg(path: &str) -> bool {
    let path = Path::new(path);
    path.is_file()
}

fn check_dir(path: &str) -> bool {
    let path = Path::new(path);
    path.is_dir()
}

fn main() {
    println!("input.txt is a regular file? {}", 
                     check_reg("input.txt") ? "yes" : "no");

    println!("docs is a directory? {}",
                    check_dir("docs") ? "yes" : "no");

    println!("/input.txt is a regular file? {}",
                   check_reg("/input.txt") ? "yes" : "no");

    println!("/docs is a directory? {}",
                   check_dir("/docs") ? "yes" : "no");
}
```
Please note that the provided C code snippet cannot be directly translated into Rust as it doesn't provide direct equivalents for `stat` and `S_ISREG` and `S_ISDIR`. These are POSIX functions, which Rust's standard library mostly or completely covers. However, Rust does not provide an equivalent function to get more detailed file information like the number of links, user id, group id, etc.
The provided C code snippet is fine for its purpose in determining if a file and a directory exist at specific locations.
You might want to consider using other libraries or built-in functionalities that are specifically designed for handling file and directory operations, based on your specific requirements.
