use std::fs;
fn main() {
    match fs::metadata("input.txt") {
        Ok(md) => println!("Size of input.txt: {} bytes", md.len()),
        Err(_) => eprintln!("Error reading file input.txt"),
    }
    match fs::metadata("/input.txt") {
        Ok(md) => println!("Size of /input.txt: {} bytes", md.len()),
        Err(_) => eprintln!("Error reading file /input.txt"),
    }
}
