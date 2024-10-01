Sure, here is how you can do it in Rust:

Note: In Rust, the way we check if a directory exists is different from Java. To do so in Rust, we need to use the `fs::Directory` trait which provides methods for traversing directories. So, you would have to import the `fs` module as shown below:
```rust
use std::fs::{self, Directory};

fn main() {
    let root_path = "/";

    if let Err(e) = fs::read_dir(&root_path.to_string()) {
        match e.kind() {
            fs::DirEntryKind::File => println!("File: {}", &e.name()),
            fs::DirEntryKind::Directory => println!("Directory: {}", &e.name()),
        }
    }
}
```
In the Rust code above, if you want to check for existence of a file at root directory level (i.e. `/`) and not just in current working directory, then replace `root_path` with `"/"`. If it's absolute path then replace the file path too.
