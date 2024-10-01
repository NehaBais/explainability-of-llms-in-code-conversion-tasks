use std::fmt;
use std::fs;

fn main() {
    // Prints the size of the input.txt file in the current working directory
    println!("Size of input.txt: {}", fs::metadata("input.txt").len());

    // Prints the size of the /input.txt file located in root folder
    println!("Size of /input.txt: {}", fs::metadata("/input.txt").len());
}
