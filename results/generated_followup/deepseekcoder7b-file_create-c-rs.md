The error can be explained as follows: "mismatched types" for `set_permissions` function on file handle, "no method named `set_permissions` found for unit type `()` in the current scope" for `dir.set_permissions(0o750)?;` and unused imports.

The fix is to correctly set permissions as per their respective types - integer value for file, and then call it on file handle of directory.

The entire corrected code will be:

```rs
use std::fs::{DirEntry, File};
use std::io::prelude::*;
use std::os::unix::fs::PermissionsExt;
use std::path::Path;

fn main() -> std::io::Result<()>  {
    // Permissions for "output.txt" are before umask
    let mut file = File::options()
        .write(true)
        .create_new(true)
        .open("output.txt")?;
    file.set_permissions(std::fs::Permissions::from_mode(0o640))?;  // rights 0640 for rw-r-----
  
    // Permissions for "docs" directory are set before umask
    let dir = std::fs::DirBuilder::new().recursive(false).create("docs")?;
    dir.set_permissions(std::fs::Permissions::from_mode(0o750))?;  // rights 0750 for rwxr-x---
  
    Ok(())
}
```
Note: This code will not work on Windows as the operation is Unix-specific. The error handling (`Result`) has also been added to handle any potential errors during file/directory operations.

