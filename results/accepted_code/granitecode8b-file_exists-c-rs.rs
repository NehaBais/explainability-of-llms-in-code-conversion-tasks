use std::fs;
fn main() {
    let cwd = std::env::current_dir().unwrap();
    let root = std::path::Path::new("/");
    assert!(cwd.join("input.txt").exists());
    assert!(cwd.join("docs").is_dir());
    assert!(root.join("input.txt").exists());
    assert!(root.join("docs").is_dir());
}
