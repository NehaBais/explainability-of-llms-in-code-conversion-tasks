use std::fs;
use std::io;
use std::path::Path;

fn main() -> io::Result<()> {
    // Get the size of input.txt in the current working directory
    let path_current = Path::new("input.txt");
    let metadata_current = fs::metadata(path_current)?;
    println!("{}", metadata_current.len());

    // Get the size of /input.txt (root directory)
    let path_root = Path::new("/input.txt");
    let metadata_root = fs::metadata(path_root)?;
    println!("{}", metadata_root.len());

    Ok(())
}