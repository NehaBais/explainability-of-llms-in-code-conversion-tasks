use std::env;
use std::fs;

fn main() {
    let cwd = env::current_dir().unwrap();
    let mut root = fs::read_dir("/").unwrap();

    // Check if input.txt exists in the current working directory
    assert!(cwd.join("input.txt").exists());
    // Check if c:/input.txt exists in the filesystem root
    assert!(root.any(|e| e.unwrap().path().ends_with("c:/input.txt")));

    // Check if docs folder exists in the current working directory
    assert!(cwd.join("docs").is_dir());
    // Check if c:/docs folder exists in the filesystem root
    assert!(root.any(|e| e.unwrap().path().ends_with("c:/docs")));
}
