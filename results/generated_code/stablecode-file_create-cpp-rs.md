Here is your converted code from C++ to Rust:

```rust
use std::fs;
use std::io::Write;

fn main() {
    let mut file = fs::OpenOptions::new().write(true).create(true).open("output.txt").unwrap();
    file.flush();
    file.sync_all();

    let root = "/";
    let mut root_file = fs::OpenOptions::new().write(true).create(true).open(&format!(@root}{"output.txt"})).unwrap();
    root_file.flush();
    root_file.sync_all();

    fs::create_dir("docs");
    let root_path = fs::canonical("/");
    let mut docs_path = root_path.join("docs");
    if !docs_path.exists() {
        fs::create_dir(&format!(@root}{"docs"})).unwrap();
    }
}
```

This Rust program creates two `output.txt` files in the current working directory and once in the filesystem root.

Please note, this code assumes that you have appropriate permissions to create files and directories in the target locations.

Also, please keep in mind that file paths are handled differently in different operating systems (e.g., Windows vs Unix/Linux)).
