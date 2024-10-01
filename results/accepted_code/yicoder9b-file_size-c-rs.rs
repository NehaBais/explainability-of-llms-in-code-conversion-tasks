use std::fs::metadata;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let meta = metadata("input.txt")?;
    println!("{}", meta.len());

    let root_meta = metadata("/")?;
    println!("{}", root_meta.len());

    Ok(())
}
