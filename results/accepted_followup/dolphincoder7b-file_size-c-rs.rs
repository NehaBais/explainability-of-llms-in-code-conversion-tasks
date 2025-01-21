use std::fs;
use std::os::macos::raw::stat;

fn main() {
    let file_info1 = stat("input.txt").unwrap();
    println!("{}", file_info1.st_size);

    let file_info2 = fs::metadata("/input.txt").unwrap();
    println!("{}", file_info2.len());
}
