extern crate libc;
use std::ffi::{CStr, CString};
use std::os::raw::c_char;
#[link(name = "c")]
extern "C" {
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
