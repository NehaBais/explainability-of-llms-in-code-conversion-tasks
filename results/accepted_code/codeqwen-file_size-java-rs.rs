use std::fs;

fn main() {
    match fs::metadata("file.txt") {
        Ok(m) => println!("{:?}", m.len()),
        Err(e) => println!("Error: {}", e),
    }

    match fs::metadata("/file.txt") {
        Ok(m) => println!("{:?}", m.len()),
        Err(e) => println!("Error: {}", e),
    }
}
