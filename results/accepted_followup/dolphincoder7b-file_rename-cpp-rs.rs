use std::fs;
fn main() {
    let current_dir = fs::read_dir(".").unwrap();

    for entry in current_dir {
        match entry.unwrap().file_name().as_ref().map(|s| s.as_ref()) {
            Some("input.txt") => {
                fs::rename("input.txt", "output.txt").expect("Failed to rename file")
            }
            Some("docs") => fs::rename("docs", "mydocs").expect("Failed to rename directory"),
            _ => (),
        }
    }

    let root = fs::read_dir("/").unwrap();

    for entry in root {
        match entry.unwrap().file_name().as_ref().map(|s| s.as_ref()) {
            Some("input.txt") => {
                fs::rename("/input.txt", "/output.txt").expect("Failed to rename file")
            }
            Some("docs") => fs::rename("/docs", "/mydocs").expect("Failed to rename directory"),
            _ => (),
        }
    }
}
