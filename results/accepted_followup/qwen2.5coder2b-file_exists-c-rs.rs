use std::fs;

fn main() {
    let home_path = std::env::home_path().unwrap();
    println!(
        "input.txt is a regular file? {}",
        fs::metadata(&format!("{}/input.txt", home_path)).map_or(false, |m| m.is_file())
    );
    println!(
        "docs is a directory? {}",
        fs::metadata(&format!("{}/docs", home_path)).map_or(false, |m| m.is_dir())
    );
    println!(
        "/input.txt is a regular file? {}",
        fs::metadata("/input.txt").map_or(false, |m| m.is_file())
    );
    println!(
        "/docs is a directory? {}",
        fs::metadata("/docs").map_or(false, |m| m.is_dir())
    );
}
