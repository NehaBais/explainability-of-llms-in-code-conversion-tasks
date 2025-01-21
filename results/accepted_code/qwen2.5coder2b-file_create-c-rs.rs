use std::fs::{File, OpenOptions};
use std::io::Result;

fn main() -> Result<()> {
    // Create a new file with size 0 bytes and write permissions.
    File::create("output.txt").and_then(|mut file| {
        file.set_len(0).map_err(|_| "Failed to set length of output.txt")
    })?;

    // Create an empty directory with read, write, and execute permissions.
    std::fs::create_dir_all("docs", 0o750)?;

    Ok(())
}