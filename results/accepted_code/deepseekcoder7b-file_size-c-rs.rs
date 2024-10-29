use std::fs::metadata;
use std::io::Error;

fn main() {
    match metadata("input.txt") {
        Ok(size) => println!("{}", size.len()),
        Err(error) => eprintln!("Unable to get file info: {}", error),
    }

    match metadata("/input.txt") {
        Ok(size) => println!("{}", size.len()),
        Err(error) => eprintln!("Unable to get file info: {}", error),
    }
}
