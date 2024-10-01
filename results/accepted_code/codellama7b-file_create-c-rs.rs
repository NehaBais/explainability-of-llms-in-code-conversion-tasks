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
