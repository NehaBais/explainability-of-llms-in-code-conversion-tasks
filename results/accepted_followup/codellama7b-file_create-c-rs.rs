use std::fs::{self, File};
use std::io::prelude::*;
use std::os::unix::fs::PermissionsExt;
use std::path::PathBuf;

fn main() -> Result<(), std::io::Error> {
    // Create empty file in current working directory
    let mut path = PathBuf::from(".");
    path.push("output.txt");
    let fd = File::create(path)?;
    fs::set_permissions(path, Permissions::from_mode(0o640))?;

    // Create empty directory in current working directory
    path.push("docs");
    fs::create_dir(path)?;
    fs::set_permissions(path, Permissions::from_mode(0o750))?;

    // Create empty file in filesystem root
    path = PathBuf::from("/");
    path.push("output.txt");
    let fd = File::create(path)?;
    fs::set_permissions(path, Permissions::from_mode(0o640))?;

    // Create empty directory in filesystem root
    path = PathBuf::from("/");
    path.push("docs");
    fs::create_dir(path)?;
    fs::set_permissions(path, Permissions::from_mode(0o750))?;

    Ok(())
}
