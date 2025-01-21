use std::fs;
use std::io;
fn main() -> io::Result<()> {
    let path_cwd = fs::read_dir("./")?
        .find(|entry| entry.as_ref().map(|e| e.path()) == Some("input.txt"))
        .unwrap();
    let path_root = fs::read_dir("/")?
        .find(|entry| entry.as_ref().map(|e| e.path()) == Some("input.txt"))
        .unwrap();
    let metadata_cwd = fs::metadata(path_cwd)?;
    let metadata_root = fs::metadata(path_root)?;
    println!(
        "Size of input.txt in current working directory: {} bytes",
        metadata_cwd.len()
    );
    println!(
        "Size of input.txt in file system root: {} bytes",
        metadata_root.len()
    );
    Ok(())
}
