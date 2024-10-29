Rust has a different way of handling file and directory operations compared to C. However, the main idea is pretty much the same - opening files/directories with desired permissions and closing them afterwards. Rust doesn't have an equivalent of `open` function like in C but it offers standard library functions for File I/O which can be used instead.

Below is your code translated into Rust:
```rust
use std::fs::{File, remove_file, DirEntry, remove_dir};
use std::io::prelude::*;
use std::os::unix::fs::PermissionsExt;
use std::path::Path;

fn main() -> std::io::Result<()> {
    // Permissions for "output.txt" are before umask 
    let mut file = File::options().write(true).create_new(true).open("output.txt")?;
    file.set_permissions(0o640)?; // rights 0640 for rw-r----- 

    // Permissions for "docs" directory are set before umask  
    let dir = std::fs::DirBuilder::new().recursive(false).create("docs")?;
    dir.set_permissions(0o750)?; // rights 0750 for rwxr-x---
    
    Ok(())
}
```

Please note that this will work only if you have the appropriate permissions to create files and directories on your filesystem. It also doesn't show error handling in place which is very important for robust software development. In production code, please handle errors properly! 

Also remember that creating a directory with `DirBuilder::new().create("docs")?` does not mean it will be created at the root of the file system but rather relative to the current working directory where your program runs from. If you need to create "in" root, then that is going out of scope for this conversion as Rust doesn't have direct support for such operations in its standard library.

