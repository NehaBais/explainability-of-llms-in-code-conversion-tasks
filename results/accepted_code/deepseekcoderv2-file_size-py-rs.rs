use std::fs;
use std::io;

fn main() -> io::Result<()> {
    // Get size of input.txt from the current working directory
    let size_current = fs::metadata("input.txt")?.len();
    println!("Size of input.txt in current directory: {} bytes", size_current);

    // Get size of input.txt from the root directory
    let size_root = fs::metadata("/input.txt")?;
    println!("Size of /input.txt (root directory): {} bytes", size_root.len());

    Ok(())
}