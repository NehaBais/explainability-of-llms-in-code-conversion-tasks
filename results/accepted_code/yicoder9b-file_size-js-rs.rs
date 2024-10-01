use std::fs::metadata;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let filepath1 = "input.txt";
    let filepath2 = "/input.txt"; // replace '/' with the correct path separator on your OS
    println!("{} bytes", get_file_size(filepath1)?);
    println!("{} bytes", get_file_size(filepath2)?);
    Ok(())
}

fn get_file_size(path: &str) -> Result<u64, Box<dyn std::error::Error>> {
    let meta = metadata(path)?;
    Ok(meta.len())
}
