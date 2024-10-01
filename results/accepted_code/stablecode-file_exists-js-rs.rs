use std::fs;
use std::path::Path;

fn main() {
    let cwd = std::env::current_dir().unwrap();

    // Check if "input.txt" exists in the current working directory
    if fs::metadata(cwd.join("input.txt"))
        .is_ok()
    {
        println!("'input.txt' found in the current working directory.");
    } else {
        println!("'input.txt' not found in the current working directory.");
    }

    // Check if "docs" folder exists in the root of the filesystem 
    if fs::metadata("/docs")
        .is_ok()
    {
        println!("'docs' folder found in the root of the filesystem.");
    } else {
        println!("'docs' folder not found in the root of the filesystem."));
    }

    // Check if "input.txt" exists in the root of the filesystem 
    if fs::metadata("/input.txt")
        .is_ok()
    {
        println!("'/input.txt' found in the root of the filesystem."));
    } else {
        println!("'/input.txt' not found in the root of the filesystem."));
    }

    // Check if "docs" folder exists in the current working directory, and print out the full canonical path to this file/folder. 
    if let Ok(metadata) = fs::metadata(cwd.join("docs"))), metadata.is_dir() {
        println!("'docs' folder found in the current working directory: {:?}", cwd.join("docs")));
    } else {
        println!("'docs' folder not found in the current working directory."));
    }

    // Check if "input.txt" exists in the current working directory 
    if let Ok(_) = fs::metadata(cwd.join("input.txt"))), _  {
        println!("'input.txt' found in the current working directory: {:?}", cwd.join("input.txt")));
    } else {
        println!("'input.txt' not found in the current working directory."));
    }
}