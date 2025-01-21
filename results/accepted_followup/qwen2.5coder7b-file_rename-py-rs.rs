use std::fs;
use std::path::Path;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    fs::rename("input.txt", "output.txt")?;
    fs::rename("docs", "mydocs")?;

    let root_path = Path::new("/");
    fs::rename(&root_path.join("input.txt"), &root_path.join("output.txt"))?;
    fs::rename(&root_path.join("docs"), &root_path.join("mydocs"))?;

    Ok(())
}
