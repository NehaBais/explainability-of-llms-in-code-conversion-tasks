use std::fs;
use std::path::Path;
use std::io;

fn main() -> io::Result<()> {
    // Verify the size of a file called input.txt for a file in the current working directory
    let file_a = Path::new("file.txt");
    match fs::metadata(&file_a) {
        Ok(meta) => println!("{}, B", meta.len()),
        Err(_) => eprintln!("File not found: {}", file_a.display()),
    }

    // Verify the size of a file called input.txt for a file in the file system root
    let file_b = Path::new("/file.txt");
    match fs::metadata(&file_b) {
        Ok(meta) => println!("{}, B", meta.len()),
        Err(_) => eprintln!("File not found: {}", file_b.display()),
    }

    Ok(())
}