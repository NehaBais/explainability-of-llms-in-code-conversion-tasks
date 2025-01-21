use std::fs;
use std::io;
use std::path::Path;

fn main() {
    // Creating an empty file named "output.txt" in the current working directory
    let _ = create_empty_file("output.txt");
    // Creating an empty file named "output.txt" at filesystem root, this will fail because it needs admin privileges
    if let Err(e) = create_empty_file(String::from("/") + "output.txt") {
        eprintln!("Error: {:?}", e);
    }

    // Creating an empty directory named "docs" in the current working directory
    let _ = fs::create_dir("docs").unwrap();
    // Creating an empty directory named "docs" at filesystem root, this will fail because it needs admin privileges
    if let Err(e) = fs::create_dir(String::from("/") + "docs") {
        eprintln!("Error: {:?}", e);
    }
}

fn create_empty_file(path: &str) -> io::Result<()> {
    let file = Path::new(path);
    fs::File::create(&file)?;
    Ok(())
}