use std::fs;
use std::path::{Path, PathBuf};

fn main() {
    // Create a function that performs the required task for one directory
    fn move_directory(src: &str, dest: &str) -> Result<(), Box<dyn std::error::Error>> {
        let src_path = PathBuf::from(src);
        let dest_path = PathBuf::from(dest);

        if src_path.exists() {
            fs::rename(&src_path, &dest_path)?;
        } else {
            return Err(format!("Directory {} does not exist", src).into());
        }

        Ok(())
    }

    // Perform the task for "docs" directory
    move_directory("docs", "mydocs")?;

    // Perform the task for C: drive
    move_directory("c:/docs", "c:/mydocs")?;

    println!("Directories successfully moved.");
}