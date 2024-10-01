use std::fs::{self, rename};
use std::io;
use std::path::{Path, PathBuf};

fn move_file(src: &str, dest: &str) -> io::Result<()> {
    fs::rename(src, dest)
}

fn move_dir(src: &str, dest: &str) -> io::Result<()> {
    // Move each file inside the directory
    for entry in fs::read_dir(src)? {
        let entry = entry?;
        if entry.file_type()?.is_file() {
            let src_path = entry.path();
            let new_name = format!("{}/{}", dest, src_path.file_name().unwrap());
            move_file(&src_path.to_string_lossy(), &new_name)?;
        }
    }
    // Finally rename the directory itself
    fs::rename(src, dest)
}

fn main() {
    if let Err(e) = move_here("input.txt", "output.txt") {
        eprintln!("Error in current directory: {}", e);
    }

    if let Err(e) = move_here("docs", "mydocs") {
        eprintln!("Error in current directory for docs: {}", e);
    }

    if let Err(e) = move_root("input.txt", "output.txt") {
        eprintln!("Error at root directory: {}", e);
    }

    if let Err(e) = move_root("docs", "mydocs") {
        eprintln!("Error at root directory for docs: {}", e);
    }
}

fn move_here(src: &str, dest: &str) -> io::Result<()> {
    move_file(src, dest)?;
    move_dir(src, dest)
}

// Attempt to operate in the root directory
fn move_root(src: &str, dest: &str) -> io::Result<()> {
    if cfg!(target_os = "windows") {
        // Get current drive letter on Windows
        let drive_letter = std::env::var("SystemDrive").expect("Unable to get system drive");
        move_file(&(drive_letter + "/" + src), &(drive_letter + "/" + dest))?;
        move_dir(&(drive_letter + "/" + src), &(drive_letter + "/" + dest))
    } else {
        // Assuming Linux or other POSIX-like OS
        move_file(src, dest)?;
        move_dir(src, dest)
    }
}
