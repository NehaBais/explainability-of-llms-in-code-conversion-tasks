 Here is the Rust equivalent of the given C code:
```rust
use std::fs::{self, File};
use std::io::prelude::*;
use std::os::unix::fs::PermissionsExt;
use std::path::PathBuf;
use std::process::Command;

fn main() -> Result<(), std::io::Error> {
    // Create empty file in current working directory
    let mut path = PathBuf::from(".");
    path.push("output.txt");
    let fd = File::create(path)?;
    fd.set_permissions(fs::Permissions::from_mode(0o640))?;
    fd.close()?;

    // Create empty directory in current working directory
    path.push("docs");
    fs::create_dir(path)?;
    let permissions = fs::metadata(&path)?.permissions().unwrap();
    permissions.set_mode(0o750);
    permissions.commit()?;

    // Create empty file in filesystem root
    path = PathBuf::from("/");
    path.push("output.txt");
    let fd = File::create(path)?;
    fd.set_permissions(fs::Permissions::from_mode(0o640))?;
    fd.close()?;

    // Create empty directory in filesystem root
    path = PathBuf::from("/");
    path.push("docs");
    fs::create_dir(path)?;
    let permissions = fs::metadata(&path)?.permissions().unwrap();
    permissions.set_mode(0o750);
    permissions.commit()?;

    Ok(())
}
```
Explanation:

1. The `std::fs` module provides the functionality to interact with the file system in Rust.
2. The `std::io::prelude` module provides a prelude for commonly used I/O operations, including creating files and directories.
3. The `std::os::unix::fs::PermissionsExt` trait provides the ability to set permissions on files and directories in Rust.
4. The `std::path::PathBuf` type is used to represent a path in Rust.
5. The `std::process::Command` type is used to execute system commands in Rust.
6. In the `main` function, we first create an empty file called "output.txt" with read-write permissions (0640) in the current working directory using the `File::create` method. We then set the permissions on this file to 0640 using the `set_permissions` method.
7. Next, we create an empty directory called "docs" in the current working directory using the `fs::create_dir` method. We then set the permissions on this directory to 0750 using the `set_mode` method of the `Permissions` object.
8. In the second part of the code, we do the same thing as above, but for an empty file and directory in the filesystem root.
9. Finally, we return `Ok(())`, indicating that the operation was successful.
