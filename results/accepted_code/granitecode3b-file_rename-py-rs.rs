use std::io;
use std::path::{Path, PathBuf};

fn main() -> io::Result<()> {
    let current_dir = std::env::current_dir()?;
    let root_dir = Path::new("/");

    rename("input.txt", "output.txt")?;
    rename(&root_dir.join("input.txt"), &root_dir.join("output.txt"))?;

    rename("docs", "mydocs")?;
    rename(&root_dir.join("docs"), &root_dir.join("mydocs"))?;

    Ok(())
}

fn rename<P: AsRef<Path>>(from: P, to: P) -> io::Result<()> {
    std::fs::rename(from, to)
}
