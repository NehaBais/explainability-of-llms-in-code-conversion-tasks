use std::fs;

fn main() {
    // Renames a file and a directory "here" (i.e. in current working directory)
    match fs::rename("input.txt", "output.txt") {
        Ok(_) => println!("File renamed successfully."),
        Err(error) => eprintln!("Failed to rename file: {:?}", error),
    }

    match fs::rename("docs", "mydocs") {
        Ok(_) => println!("Directory renamed successfully."),
        Err(error) => eprintln!("Failed to rename directory: {:?}", error),
    }

    // Renames a file and a directory in the filesystem root (assumed path is correct)
    match fs::rename("/root_path/input.txt", "/root_path/output.txt") {
        Ok(_) => println!("Root file renamed successfully."),
        Err(error) => eprintln!("Failed to rename root file: {:?}", error),
    }

    match fs::rename("/root_path/docs", "/root_path/mydocs") {
        Ok(_) => println!("Root directory renamed successfully."),
        Err(error) => eprintln!("Failed to rename root directory: {:?}", error),
    }
}
