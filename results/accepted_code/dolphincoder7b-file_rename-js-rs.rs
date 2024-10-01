use std::error::Error;
use std::fs::{move_file, rename, rename_file};
use std::path::PathBuf;

fn main() -> Result<(), Box<dyn Error>> {
    let src = PathBuf::from("input.txt");
    let dest1 = PathBuf::from("output.txt");
    let dest2 = PathBuf::from("/c/output.txt");

    rename(&src, &dest1)?;
    move_file(src, dest2)?; // equivalent to MoveFile in JavaScript
    rename_file(PathBuf::from("docs"), PathBuf::from("mydocs"))?; // equivalent to MoveFolder in JavaScript
    rename_file(PathBuf::from("/c/docs"), PathBuf::from("/c/mydocs"))?; // equivalent to MoveFolder in JavaScript

    Ok(())
}
