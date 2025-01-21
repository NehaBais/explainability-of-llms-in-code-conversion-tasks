use std::fs;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    // Create "output.txt" if it doesn't exist, with no content.
    fs::File::create("output.txt")?;

    // Create "docs" directory if it doesn't exist, with no contents.
    fs::create_dir_all("/docs")?;

    Ok(())
}
