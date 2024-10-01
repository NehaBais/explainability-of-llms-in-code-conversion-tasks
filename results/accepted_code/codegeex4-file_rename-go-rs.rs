use std::fs;

fn main() {
    fs::rename("input.txt", "output.txt").expect("Unable to move file");
    fs::rename("docs", "mydocs").expect("Unable to move directory");

    // Since we need permissions to rename files and directories in the root,
    // we will have to run this program with sudo (or as root) on Unix-based systems.
    fs::rename("/input.txt", "/output.txt").expect("Unable to move file");
    fs::rename("/docs", "/mydocs").expect("Unable to move directory");
}
