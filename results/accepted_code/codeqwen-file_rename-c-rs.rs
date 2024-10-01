use std::fs;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    // rename current working directory files
    fs::rename("input.txt", "output.txt")?;
    fs::rename("docs", "mydocs")?;

    // get the root path of the system
    let root = "/";
    // rename root files
    fs::rename(
        format!("{}/input.txt", root),
        format!("{}/output.txt", root),
    )?;
    fs::rename(format!("{}/docs", root), format!("{}/mydocs", root))?;

    Ok(())
}
