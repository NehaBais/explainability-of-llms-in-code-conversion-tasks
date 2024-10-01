use std::path::Path;

// Check for existence in current working directory
let current_cwd = Path::new(".");
if current_cwd.join("docs/input.txt").exists() {
    println!("Input file exists in current working directory");
} else {
    println!("Input file does not exist in current working directory");
}

// Check for existence in filesystem root
let root_dir = Path::new("/");
if root_dir.join("docs/input.txt").exists() {
    println!("Input file exists in filesystem root");
} else {
    println!("Input file does not exist in filesystem root");
}