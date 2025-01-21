use std::{fs, path::Path};

pub fn mkdir_p(path: &str) -> std::io::Result<()> {
    fs::create_dir_all(Path::new(path))?;
    Ok(())
}

fn main() {
    match mkdir_p("/tmp/some/path/to/dir") {
        Ok(()) => println!("Directory created successfully"),
        Err(e) => println!("Error creating directory: {:?}", e),
    }
}