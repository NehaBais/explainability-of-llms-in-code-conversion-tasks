The equivalent code in Rust would be:

```rust
use std::fs::{self, File};
use std::io::prelude::*;

fn main() {
    fs::create_dir("docs").expect("Unable to create directory");
    let mut f = File::create("output.txt").expect("Unable to create file");
    f.set_permissions(fs::Permissions::from_mode(0o0640)).expect("Unable to set permissions");
}
```

This code creates the "docs" directory and the "output.txt" file. The permissions of the "output.txt" file are set to 0640, which means the owner can read and write the file, while others can only read it. For the directory "docs", the permission is set to 0750, meaning that the owner has full access, group members have read and execute permissions but not write permissions, and others do not have any special permissions.

Remember: In Rust, you should always check for errors, especially when dealing with file or system operations. The `expect` method is used here for simplicity, but in a real-world situation, it's better to handle errors more gracefully.
