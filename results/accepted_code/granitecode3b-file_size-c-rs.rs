extern crate libc;
use std::fs::metadata;
fn main() {
    let metadata1 = metadata("input.txt").unwrap();
    println!("{}", metadata1.len());
    let metadata2 = metadata("/input.txt").unwrap();
    println!("{}", metadata2.len());
}
