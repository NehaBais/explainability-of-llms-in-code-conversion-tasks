use std::fs;
use std::io;

fn create_file(file_path: &str) {
    let mut file = fs::File::create(file_path).expect("Failed to create file");
}

fn create_dir(dir_path: &str) {
    fs::create_dir_all(dir_path).expect("Failed to create directory");
}

fn main() -> io::Result<()> {
    let root_path = std::env::var("ROOT").unwrap();

    create_file(&format!("{}/input.txt", root_path)));
    create_file(&format!("{}/input.txt", "/")));
    create_dir(&format!("{}/docs", root_path)));
    create_dir(&format!("{}/docs", "/")));

    Ok(())
}