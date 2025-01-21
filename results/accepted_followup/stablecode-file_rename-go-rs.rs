use std::fs;
use std::path::Path;

fn main() {
    let current_dir = std::env::current_dir().unwrap();

    // rename in current directory
    rename(&["input.txt", "output.txt"]))
        .expect("Unable to rename file");

    // rename in docs directory
    let docs_dir = current_dir.join("docs");
    assert!(fs::metadata(&docs_dir))).expect("Failed to get metadata");

    rename(
        &[
            &format!("{}/input.txt", docs_dir.to_string_lossy())],
        &format!("{}/output.txt", docs_dir.to_string_lossy()))
    )
    .expect("Unable to rename file");

    // rename in filesystem root directory (assuming the root is under /home))
    let root_dir = "/home".to_string();
    let filesystem_root_dir = current_dir.join(&format!("{}/docs", root_dir)));
    assert!(fs::metadata(&filesystem_root_dir))).expect("Failed to get metadata");

    rename(
        &[
            &format!("{}/input.txt", filesystem_root_dir.to_string_lossy())],
            &format!("{}/output.txt", filesystem_root_dir.to_string_lossy()))]
    )
    .expect("Unable to rename file");
}

fn rename(from: &[&str], to: &str) -> Result<(), std::io::Error> {
    std::fs::rename(from, to)?;
    Ok(())
}