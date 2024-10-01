Sure, here's the equivalent Rust code:
```
use std::fs::{File, create_dir};
use std::io::{Write, OpenOptions};
use std::os::unix::fs::OpenFlags;
use std::os::raw::c_int;

fn main() {
 let fd = unsafe {
 OpenOptions::new().write(true).create(true).truncate(true).mode(0o640).open("output.txt")
 .unwrap() };
 drop(fd);

 create_dir("/docs").unwrap();
}
```
This code uses the `std` library to create a new file and directory in Rust. It first creates an empty file called "output.txt" with read/write permissions (`0640`), then creates an empty directory called "docs" with read-write-execute permissions (`0750`). The `unwrap()` method is used to handle any potential errors that may occur during file or directory creation.

