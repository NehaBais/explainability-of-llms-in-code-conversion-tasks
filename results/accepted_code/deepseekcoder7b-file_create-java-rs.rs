use std::fs;
use std::io::Error;
use std::path::Path;

fn main() {
    match fs::File::create("output.txt") {
        Ok(_) => println!("Created file 'output.txt' in the current directory"),
        Err(error) => println!(
            "Failed to create file 'output.txt' in the current directory: {}",
            error
        ),
    };

    match fs::File::create("/output.txt") {
        Ok(_) => println!("Created file '/output.txt' in the root directory"),
        Err(error) => println!(
            "Failed to create file '/output.txt' in the root directory: {}",
            error
        ),
    };

    match fs::DirBuilder::new().recursive(true).create("/docs") {
        Ok(_) => println!("Created directory 'docs' in the root directory"),
        Err(error) => println!(
            "Failed to create directory 'docs' in the root directory: {}",
            error
        ),
    };

    match fs::DirBuilder::new().recursive(true).create("docs") {
        Ok(_) => println!("Created directory 'docs' in the current directory"),
        Err(error) => println!(
            "Failed to create directory 'docs' in the current directory: {}",
            error
        ),
    };
}
