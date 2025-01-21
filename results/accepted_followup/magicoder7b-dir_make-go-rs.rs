use std::fs;
use std::io;

pub fn make_dir(dir_path: &str) -> io::Result<()> {
    fs::create_dir_all(dir_path)?;
    Ok(())
}

fn main() {
    match make_dir("/tmp/some/path/to/dir") {
        Ok(_) => println!("Directory created successfully"),
        Err(e) => eprintln!("Error: {}", e),
    }
}
