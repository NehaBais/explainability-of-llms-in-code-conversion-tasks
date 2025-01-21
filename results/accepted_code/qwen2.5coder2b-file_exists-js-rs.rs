use std::fs;

fn main() {
    let current_working_dir = std::env::current_dir().unwrap();
    
    // Check if input.txt and docs exist in the current working directory
    check_directory(current_working_dir);
    
    // Check if input.txt and docs exist in the root filesystem
    let root_path = std::path::Path::new("/");
    check_directory(root_path.join("input.txt"));
    check_directory(root_path.join("docs"));
}

fn check_directory(path: &std::path::Path) {
    match fs::metadata(path).unwrap() {
        std::fs::Metadata { permissions, file_type, .. } => {
            if permissions.is_dir() {
                println!("The directory exists.");
            } else if permissions.is_file() {
                println!("The file exists.");
            }
        },
        e => {
            panic!("Failed to check directory: {:?}", e);
        }
    }
}