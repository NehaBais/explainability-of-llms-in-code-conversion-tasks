The equivalent code in Rust would be:

```rust
use std::fs;

fn main() {
    // Change the name of input.txt to output.txt and docs to mydocs in current directory
    if let Err(e1) = fs::rename(&["input.txt", "output.txt"], &["output.txt"]) {
        println!("Error occurred when renaming file: {:?}", e1);
    }

    // Change the name of docs to mydocs in filesystem root directory 
    if let Err(e2) = fs::rename(&["c:/input.txt", "c:/output.txt"], &["c:/output.txt"]) {
        println!("Error occurred when renaming file: {:?}", e2);
    } 

    // Change the directory name from docs to mydocs in current directory and filesystem root
    if let Err(e3) = fs::rename(&["docs", "mydocs"], &["c:/docs", "c:/mydocs"]) {
        println!("Error occurred when renaming folder: {:?}", e3);
    }
}
```
This code is using the `fs` crate provided by Rust for filesystem operations. The methods `fs::rename()` are used to rename a file or directory and return an error if any problems occur. The `main()` function runs as the entry point of a program in Rust, so it runs when the script starts.
