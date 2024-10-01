use std::fs;
fn main() {
    let file_path = "input.txt";
    if let Ok(metadata) = fs::metadata(file_path) {
        let size = metadata.len();
        println!("File size: {} bytes", size);
    } else {
        eprintln!("Error: Unable to get file size for {}", file_path);
    }

    // Verify the same task with the root file system
    match fs::metadata("/") {
        Ok(metadata) => {
            let size = metadata.len();
            println!("Root file size: {} bytes", size);
        }
        Err(err) => eprintln!("Error: Unable to get root file size - {}", err),
    }
}
