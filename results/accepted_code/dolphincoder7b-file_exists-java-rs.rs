use std::fs;

fn main() {
    assert!(fs::metadata("input.txt").is_ok()); // current working directory
    assert!(fs::metadata("/docs/input.txt").is_ok()); // file and directory in the filesystem root
}
