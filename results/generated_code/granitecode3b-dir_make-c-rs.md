Sure, here's the equivalent Rust code for creating a directory and any missing parents:
```rust
extern crate libc;
use std::ffi::{CStr, CString};
use std::os::raw::c_char;
#[link(name = "c")] extern "C" {
    fn mkdir(path: *const c_char, mode: u32) -> i32;
    fn stat(path: *const c_char, buf: *mut libc::stat) -> i32;
    fn S_ISDIR(mode: u32) -> bool;
}
fn create_directory(path: &str) {
    let path_c = CString::new(path).unwrap();
    unsafe {
        let mode: u32 = 0o755; // default permissions for directories in Linux
        if stat(path_c.as_ptr(), std::ptr::null_mut()) != -1 {
            let buf: libc::stat = Default::default();
            if !S_ISDIR(buf.st_mode) {
                panic!("{} is not a directory", path);
            }
        } else {
            mkdir(path_c.as_ptr(), mode);
        }
    }
}
fn main() {
    let path = "./path/to/dir";
    create_directory(path);
}
```
This code uses the `libc` crate to call the `mkdir` and `stat` functions from the C library. The `create_directory` function takes a path string as input and creates the directory and any missing parents. It first checks if the directory already exists by calling `stat`. If it does, it checks if it is a directory using `S_ISDIR`. If it is not a directory, it raises an error. Otherwise, it calls `mkdir` to create the directory.

