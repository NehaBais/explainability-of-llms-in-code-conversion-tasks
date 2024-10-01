extern crate std;
use std::fs;

fn main() {
    match fs::metadata("input.txt") {
        Ok(meta) => println!("{}", meta.len()),
        Err(e) => eprintln!("Error: {}", e),
    };

    match fs::metadata("/input.txt") {
        Ok(meta) => println!("{}", meta.len()),
        Err(e) => eprintln!("Error: {}", e),
    };
}
