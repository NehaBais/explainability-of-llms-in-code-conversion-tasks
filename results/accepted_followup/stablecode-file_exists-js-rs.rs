use std::fs;
use std::path::Path;

fn main() {
    let cwd = std::env::current_dir().unwrap();

    if let Ok(metadata) = fs::metadata(cwd.join("docs"))), metadata.is_dir() {
        println!("'docs' folder found in the current working directory: {:?}", cwd.join("docs")));
    } else {
        println!("'docs' folder not found in the current working directory."));
    }

    if let Ok(_) = fs::metadata(cwd.join("input.txt"))), _  {
        println!("'input.txt' found in the current working directory: {:?}", cwd.join("input.txt")));
    } else {
        println!("'input.txt' not found in the current working directory."));
    }

    if let Ok(metadata) = fs::metadata("/docs")), metadata.is_dir() {
        println!("'/docs' folder found in the root of the filesystem: {:?}", "/docs"));
    } else {
        println!("'/docs' folder not found in the root of the filesystem."));
    }

    if let Ok(_) = fs::metadata("/input.txt")), _  {
        println!("'/input.txt' found in the root of the filesystem: {:?}", "/input.txt"));
    } else {
        println!("'/input.txt' not found in the root of the filesystem."));
    }
}