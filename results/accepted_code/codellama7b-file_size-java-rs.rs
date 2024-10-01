use std::fs::File;

fn main() {
    let file_a = File::open("file.txt").unwrap();
    println!("{} bytes", file_a.metadata().len());
    let file_b = File::open("/file.txt").unwrap();
    println!("{} bytes", file_b.metadata().len());
}
