use std::fs::metadata;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let metadata = metadata("input.txt")?;
    println!("Size in bytes: {}", metadata.len());

    let root_metadata = metadata("/input.txt")?;
    println!("Root size in bytes: {}", root_metadata.len());

    Ok(())
}
