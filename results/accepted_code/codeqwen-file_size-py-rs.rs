use std::fs;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let size = fs::metadata("input.txt")?.len();
    println!("size of input.txt in current directory: {} bytes", size);
    let size_root = fs::metadata("/input.txt")?.len();
    println!("size of /input.txt in root: {} bytes", size_root);
    Ok(())
}
