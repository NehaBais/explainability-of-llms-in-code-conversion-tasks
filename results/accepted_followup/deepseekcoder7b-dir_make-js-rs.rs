use std::fs;

fn mkdirp(path: &str) -> Result<(), Box<dyn std::error::Error>> {
    fs::create_dir_all(path)?;
    Ok(())
}

// Consider adding a `main` function for testing
fn main() {
    let _ = mkdirp("/tmp/test");
}
