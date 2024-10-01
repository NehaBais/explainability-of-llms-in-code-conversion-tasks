use std::fs;
use std::path::Path;
fn main() {
    let file_a = Path::new("file.txt");
    let metadata_a = fs::metadata(file_a).unwrap();
    println!("{:?}", metadata_a.len());
    let file_b = Path::new("/file.txt");
    let metadata_b = fs::metadata(file_b).unwrap();
    println!("{:?}", metadata_b.len());
}
