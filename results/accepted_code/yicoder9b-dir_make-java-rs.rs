use std::error::Error;
use std::path::Path;

fn main() -> Result<(), Box<dyn Error>> {
    let path = Path::new("C:/parent/test");
    std::fs::create_dir_all(path)?;
    println!("path successfully created");
    Ok(())
}
