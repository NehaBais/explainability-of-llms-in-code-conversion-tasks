use std::fs::{File, OpenOptions};
use std::io::prelude::*;
fn main() {
    let mut f = File::create("output.txt").expect("Unable to create file");
    drop(f);
    let mut f = OpenOptions::new()
        .write(true)
        .create(true)
        .open("/output.txt")
        .expect("Unable to create file");
    drop(f);

    fs::create_dir("docs").expect("Unable to create directory");
    fs::create_dir("/docs").expect("Unable to create directory");
}
