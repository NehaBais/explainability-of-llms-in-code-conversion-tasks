extern crate std;
use std::fs;
fn main() {
    match fs::metadata("input.txt") {
        Ok(_) => println!(
            "Size of file input.txt is {} bytes",
            fs::metadata("input.txt").unwrap().len()
        ),
        Err(e) => eprintln!("Error: {}", e),
    };

    match fs::metadata("/") {
        Ok(_) => println!(
            "Size of file /input.txt is {} bytes",
            fs::metadata("/input.txt").unwrap().len()
        ),
        Err(e) => eprintln!("Error: {}", e),
    };
}
