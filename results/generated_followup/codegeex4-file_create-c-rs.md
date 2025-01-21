The error occurs because Rust does not have a built-in `from_mode` method for setting file permissions directly on POSIX systems. The fix involves importing the `PermissionsExt` trait from the `std::os::unix::fs` module, which provides this functionality. Corrected code:

```rs
use std::fs::{self, File};
use std::io::prelude::*;
use std::os::unix::fs::PermissionsExt;

fn main() {
    fs::create_dir("docs").expect("Unable to create directory");
    let mut f = File::create("output.txt").expect("Unable to create file");
    f.set_permissions(fs::Permissions::from_mode(0o0640))
        .expect("Unable to set permissions");
}
```
