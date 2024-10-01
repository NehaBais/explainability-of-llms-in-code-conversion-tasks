use std::fs::{metadata, File};
use std::io::Read;
fn main() {
    let input_file = metadata("input.txt").unwrap();
    let root_input_file = metadata("/input.txt").unwrap();
    println!("Input file size: {}", input_file.len());
    println!("Root input file size: {}", root_input_file.len());
}
