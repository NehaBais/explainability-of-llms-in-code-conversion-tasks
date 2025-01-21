use std::fs;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let current_size = fs::metadata("input.txt")?.len();
    let root_size = fs::metadata("/input.txt")?.len();

    println!("Size of 'input.txt' in the current working directory: {} bytes", current_size);
    println!("Size of '/input.txt' on the file system root: {} bytes", root_size);

    Ok(())
}