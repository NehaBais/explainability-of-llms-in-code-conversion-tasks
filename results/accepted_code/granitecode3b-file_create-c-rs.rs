use std::fs::{create_dir, File};
use std::io::{OpenOptions, Write};
use std::os::raw::c_int;
use std::os::unix::fs::OpenFlags;

fn main() {
    let fd = unsafe {
        OpenOptions::new()
            .write(true)
            .create(true)
            .truncate(true)
            .mode(0o640)
            .open("output.txt")
            .unwrap()
    };
    drop(fd);

    create_dir("/docs").unwrap();
}
