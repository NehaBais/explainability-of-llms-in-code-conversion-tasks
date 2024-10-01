use std::fs;
use std::path::Path;

fn main() {
    let current_dir = Path::new(".");
    move_file(&current_dir, "input.txt", "output.txt");
    move_folder(&current_dir, "docs", "mydocs");

    let root_dir = Path::new("/");
    move_file(&root_dir, "/input.txt", "/output.txt");
    move_folder(&root_dir, "/docs", "/mydocs");
}

fn move_file(parent: &Path, from: &str, to: &str) {
    let full_from = parent.join(from);
    let full_to = parent.join(to);
    match fs::rename(&full_from, &full_to) {
        Ok(_) => println!("{} moved to {}", from, to),
        Err(e) => eprintln!("Failed to move {}: {}", from, e),
    }
}

fn move_folder(parent: &Path, from: &str, to: &str) {
    let full_from = parent.join(from);
    let full_to = parent.join(to);
    match fs::rename(&full_from, &full_to) {
        Ok(_) => println!("{} moved to {}", from, to),
        Err(e) => eprintln!("Failed to move {}: {}", from, e),
    }
}
