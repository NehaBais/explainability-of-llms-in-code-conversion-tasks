use std::fs;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let path = "C:/parent/test";
    fs::create_dir_all(path)?;
    println!("Path successfully created");
    Ok(())
}
