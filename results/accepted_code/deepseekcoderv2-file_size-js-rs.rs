use std::fs;
use std::io;
use std::path::Path;

fn main() -> io::Result<()> {
    // Get the size of input.txt in the current directory
    let path_current = Path::new("input.txt");
    if let Ok(metadata) = fs::metadata(&path_current) {
        println!("Size of {} (current dir): {} bytes", path_current.display(), metadata.len());
    } else {
        eprintln!("File not found: {}", path_current.display());
    }

    // Get the size of c:/input.txt
    let path_root = Path::new("c:/input.txt");
    if let Ok(metadata) = fs::metadata(&path_root) {
        println!("Size of {} (root dir): {} bytes", path_root.display(), metadata.len());
    } else {
        eprintln!("File not found: {}", path_root.display());
    }

    Ok(())
}