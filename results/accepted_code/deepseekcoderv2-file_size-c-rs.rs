use std::fs;
use std::os::unix::fs::MetadataExt;

fn main() {
    let input = fs::metadata("input.txt").unwrap();
    println!("{}", input.len());

    let root = fs::metadata("/input.txt").unwrap();
    println!("{}", root.len());
}
