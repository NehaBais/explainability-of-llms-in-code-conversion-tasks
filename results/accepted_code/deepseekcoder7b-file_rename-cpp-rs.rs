use std::fs;
use std::io::Error;

fn main() {
    match fs::rename("input.txt", "output.txt") {
        Ok(_) => println!("Renamed 'input.txt' to 'output.txt' in current directory"),
        Err(e) => println!("Error renaming file: {}", e),
    };

    match fs::rename("docs", "mydocs") {
        Ok(_) => println!("Renamed 'docs' to 'mydocs' in current directory"),
        Err(e) => println!("Error renaming dir: {}", e),
    };

    match fs::rename("/input.txt", "/output.txt") {
        Ok(_) => println!("Renamed '/input.txt' to '/output.txt' at root"),
        Err(e) => println!("Error renaming file: {}", e),
    };

    match fs::rename("/docs", "/mydocs") {
        Ok(_) => println!("Renamed '/docs' to '/mydocs' at root"),
        Err(e) => println!("Error renaming dir: {}", e),
    };
}
