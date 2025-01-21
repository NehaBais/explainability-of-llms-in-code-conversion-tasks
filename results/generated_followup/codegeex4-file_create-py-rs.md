The error occurred because `extern crate` is not used for crates that come with Rust's standard library. The solution is to use `use std::fs;` at the top of the file.

Here's the corrected code:

```rust
use std::fs;

fn create(dir: &str) {
    let dir_path = format!("{}/output.txt", dir);
    fs::File::create(&dir_path).expect("Unable to create file");

    let docs_path = format!("{}/docs", dir);
    fs::create_dir_all(&docs_path).expect("Unable to create directory");
}

fn main() {
    // Current Directory
    create(".");
    
    // Filesystem Root
    if cfg!(target_os = "linux") || cfg!(target_os = "macos") {
        create("/");
    } else if cfg!(target_os = "windows") {
        let root: String;
        if std::env::consts::FILE_SEPARATOR == '\\' {
            root = "C:\\";
        } else {
            root = "/";
        }
        create(&root);
    } else {
        println!("Sorry! This operating system is not supported!");
    }
}
```
