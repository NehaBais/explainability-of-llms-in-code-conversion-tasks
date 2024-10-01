use std::fs;
use std::os::stat;

fn main() {
    let file_info1 = stat("input.txt").unwrap();
    println!("{}", file_info1.len());

    let file_info2 = fs::metadata("/input.txt").unwrap();
    println!("{}", file_info2.len());
}
