use std::fs;

fn main() {
    match fs::metadata("input.txt") {
        Ok(meta) => println!("Size of input.txt: {}", meta.len()),
        Err(e) => eprintln!("Error: {}", e),
    }

    match fs::metadata("/c/input.txt") {
        Ok(meta) => println!("Size of c:/input.txt: {}", meta.len()),
        Err(e) => eprintln!("Error: {}", e),
    }
}