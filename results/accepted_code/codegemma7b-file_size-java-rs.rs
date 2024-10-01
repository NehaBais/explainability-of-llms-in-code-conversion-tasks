use std::fs::File;

fn main() {
    let file_a = File::open("file.txt").unwrap();
    println!("{:?} B", file_a.metadata().unwrap().len());
    let file_b = File::open("/file.txt").unwrap();
    println!("{:?} B", file_b.metadata().unwrap().len());
}
