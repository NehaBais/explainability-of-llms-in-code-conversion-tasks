use std::fs;
use std::path::Path;

/// Create a directory and any missing parents.
///
/// This function mimics the behavior of `mkdir -p`.
fn mkdir_p(path: &str) -> Result<(), Box<dyn std::error::Error>> {
    let path = Path::new(path);
    fs::create_dir_all(path)?;
    Ok(())
}

fn main() {
    match mkdir_p("./path/to/dir") {
        Ok(_) => println!("Directory created successfully."),
        Err(e) => eprintln!("Failed to create directory: {}", e),
    }
}