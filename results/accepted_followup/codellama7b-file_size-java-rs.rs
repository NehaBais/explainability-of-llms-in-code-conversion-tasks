use std::fs::File;

fn main() {
    let file_a = File::open("file.txt").expect("Error opening file");
    println!("{} bytes", file_a.metadata().len());
    let file_b = File::open("/file.txt").expect("Error opening file");
    println!("{} bytes", file_b.metadata().len());
}
