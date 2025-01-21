use std::fs;
use std::io::Write;
fn main() {
    let mut file = fs::File::create("./output.txt").expect("Failed to create file");
    file.write_all(&[]).expect("Failed to write data to file");

    let mut root_file = fs::File::create("/output.txt").expect("Failed to create file");
    root_file
        .write_all(&[])
        .expect("Failed to write data to file");

    fs::create_dir("docs").expect("Failed to create directory");
    fs::create_dir("/docs").expect("Failed to create directory");
}
