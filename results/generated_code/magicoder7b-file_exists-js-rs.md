 Rust doesn't have a built-in way to handle file operations like JavaScript does with ActiveXObject("Scripting.FileSystemObject"), so we need an external crate for this. One such crate is 'std::fs'.

Here's how you could achieve similar functionality in Rust:

```rust
use std::path::Path;
use std::fs;

fn main() {
    let input_txt = "input.txt";
    let c_input_txt = Path::new("c:/").join(input_txt);
    let docs = "docs";
    let c_docs = Path::new("c:/").join(docs);

    check_exist(&input_txt, &"."););
    check_exist(&c_input_txt.to_string_lossy(), &"c:\\");
    check_exist(&docs, "." );
    check_exist(&c_docs.to_string_lossy(), "c:\\");
}

fn check_exist(path: &str, root: &str) {
    if let Err(e) = fs::metadata(root.to_string() + path) {
        println!("The file or directory does not exist: {:?}", e);
    } else {
        println!("File or directory exists: {}", path);
    }
}
```
In this code, 'check_exist' function is used to check if a specified file or directory exists. It takes the path of the file/directory and root as input parameters. If the path doesn't exist, it will print out the error message; otherwise, it prints out that the file or directory exists.

The 'main' function creates two paths for both current working directory and filesystem root for "input.txt" and "docs", then calls 'check_exist' to test each one of them.
