use std::fs::{File, OpenOptions};
use std::io::Result;

fn main() -> Result<()> {
    File::create("output.txt").and_then(|mut file| {
        file.set_len(0)
            .map_err(|_| "Failed to set length of output.txt")
    })?;

    std::fs::create_dir_all("docs", 0o750)?;

    Ok(())
}
