use std::fs;
use std::path::Path;

fn mkdir_p(path: &str) {
    let path = Path::new(path);

    if path.exists() {
        return;
    }

    if let Err(e) = fs::create_dir_all(path) {
        panic!("Failed to create directory: {}", e);
    }
}

fn main() {
    let args: Vec<String> = std::env::args().collect();

    if args.len() != 2 {
        println!("Usage: mkdir <path>");
        return;
    }

    let path = args[1].clone();

    mkdir_p(&path);

    println!("Directory created: {}", path);
}
