use std::fs;
use std::path::{Path, PathBuf};
use std::io;

fn main() -> io::Result<()> {
    // Define the source and destination paths for files and directories
    let current_dir = env!("CARGO_MANIFEST_DIR");
    
    // Current working directory operations
    let input_path = Path::new(current_dir).join("input.txt");
    let output_path = Path::new(current_dir).join("output.txt");
    fs::rename(&input_path, &output_path)?;

    let docs_path = Path::new(current_dir).join("docs");
    let mydocs_path = Path::new(current_dir).join("mydocs");
    fs::rename(&docs_path, &mydocs_path)?;

    // Filesystem root operations
    let c_root_path = Path::new("/").join("input.txt");
    let c_output_path = Path::new("/").join("output.txt");
    fs::rename(&c_root_path, &c_output_path)?;

    let c_docs_path = Path::new("/").join("docs");
    let c_mydocs_path = Path::new("/").join("mydocs");
    fs::rename(&c_docs_path, &c_mydocs_path)?;

    Ok(())
}