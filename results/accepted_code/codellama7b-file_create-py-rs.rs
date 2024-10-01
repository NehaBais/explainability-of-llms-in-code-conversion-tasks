use std::fs;

fn main() {
    let here = fs::File::create("output.txt").unwrap();
    let root = fs::File::create("/output.txt").unwrap();
    let docs = fs::DirBuilder::new().build("docs").unwrap();
}
