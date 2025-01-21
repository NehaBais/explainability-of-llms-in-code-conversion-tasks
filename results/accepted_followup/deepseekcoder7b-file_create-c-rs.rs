use std::fs::{DirEntry, File};
use std::io::prelude::*;
use std::os::unix::fs::PermissionsExt;
use std::path::Path;

fn main() -> std::io::Result<()> {
    // Permissions for "output.txt" are before umask
    let mut file = File::options()
        .write(true)
        .create_new(true)
        .open("output.txt")?;
    file.set_permissions(std::fs::Permissions::from_mode(0o640))?; // rights 0640 for rw-r-----

    // Permissions for "docs" directory are set before umask
    let dir = std::fs::DirBuilder::new().recursive(false).create("docs")?;
    dir.set_permissions(std::fs::Permissions::from_mode(0o750))?; // rights 0750 for rwxr-x---

    Ok(())
}
