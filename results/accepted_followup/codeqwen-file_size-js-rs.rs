use std::fs::File;
use std::io::Read;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let mut f = File::open("input.txt")?;
    let metadata = f.metadata()?;
    println!("Size in bytes: {}", metadata.len());

    let root_f = File::open("/input.txt")?;
    let root_metadata = root_f.metadata()?;
    println!("Root size in bytes: {}", root_metadata.len());

    Ok(())
}
