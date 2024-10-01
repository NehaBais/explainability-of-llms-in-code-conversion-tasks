use std::fs;

fn main() {
    let fileA = fs::File::open("file.txt").unwrap(); // Error handling omitted for brevity
    println!("{} B", fs::metadata(fileA).unwrap().len());

    let fileB = fs::File::open("/file.txt").unwrap();
    println!("{} B", fs::metadata(fileB).unwrap().len());
}
