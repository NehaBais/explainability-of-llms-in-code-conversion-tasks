use std::fs;
fn main() -> Result<(), std::io::Error> {
    fs::File::create("output.txt")?;
    fs::File::create(format!("{}/output.txt", std::env::current_dir()?.display()))?;
    fs::create_dir("docs")?;
    fs::create_dir(format!("{}/docs", std::env::current_dir()?.display()))?;
    Ok(())
}
