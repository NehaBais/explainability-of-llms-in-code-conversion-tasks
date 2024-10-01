extern crate libc;
use libc::stat;
use libc::struct_stat;
use std::fs;
use std::io;
fn main() {
    let mut foo = unsafe { std::mem::MaybeUninit::uninit().assume_init() };
    let res = unsafe { stat(b"input.txt".as_ptr() as *const _, &mut foo) };
    if res != 0 {
        println!("Error getting file size: {}", io::Error::last_os_error());
        return;
    }
    let file_size = unsafe { (*foo.st_size) as usize };
    println!(
        "File size of input.txt in current working directory is {} bytes",
        file_size
    );
    let res = unsafe { stat(b"/input.txt".as_ptr() as *const _, &mut foo) };
    if res != 0 {
        println!("Error getting file size: {}", io::Error::last_os_error());
        return;
    }
    let file_size = unsafe { (*foo.st_size) as usize };
    println!(
        "File size of input.txt in root directory is {} bytes",
        file_size
    );
}
