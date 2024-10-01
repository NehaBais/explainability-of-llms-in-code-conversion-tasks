extern crate libc;
use self::libc::{stat, S_ISDIR, S_ISREG};
use std::ffi::{CStr, CString};
use std::os::raw::c_char;
// C-style strings (for safety)
fn cstr(s: &str) -> *const c_char {
    CString::new(s).unwrap().into_raw()
}
// Safe Rust functions to call C-style functions
unsafe fn stat(path: *const c_char, buf: *mut libc::stat) -> i32 {
    libc::stat(path, buf)
}
unsafe fn mkdir(path: *const c_char, mode: u32) -> i32 {
    libc::mkdir(path, mode)
}
unsafe fn rmdir(path: *const c_char) -> i32 {
    libc::rmdir(path)
}
// Safe Rust functions to call C-style strings as arguments and return values
fn stat_wrapper(path: &str) -> Option<(i32, libc::stat)> {
    let path = cstr(path);
    let mut buf = mem::MaybeUninit::<libc::stat>::uninit();
    let ret = stat(path, buf.as_mut_ptr());
    if ret == 0 {
        Some((ret, buf.assume_init()))
    } else {
        None
    }
}
fn mkdir_wrapper(path: &str) -> Result<(), String> {
    let path = cstr(path);
    match unsafe { mkdir(path, libc::S_IRUSR | libc::S_IWUSR) } {
        0 => Ok(()),
        err => Err(format!("Failed to create directory {}", path)),
    }
}
fn rmdir_wrapper(path: &str) -> Result<(), String> {
    let path = cstr(path);
    match unsafe { rmdir(path) } {
        0 => Ok(()),
        err => Err(format!("Failed to remove directory {}", path)),
    }
}
fn main() {
    // Check current directory
    if let Some((ret, buf)) = stat_wrapper("input.txt") {
        if ret == 0 && S_ISREG(buf.st_mode) {
            println!("Input file is a regular file");
        } else if ret == 0 && S_ISDIR(buf.st_mode) {
            println!("Input file is a directory");
        } else {
            println!("Unknown file type");
        }
    }
    // Check docs directory (root)
    if let Some((ret, buf)) = stat_wrapper("/docs") {
        if ret == 0 && S_ISDIR(buf.st_mode) {
            println!("Docs directory is a directory");
        } else if ret == 0 && S_ISREG(buf.st_mode) {
            println!("Docs directory is a regular file");
        } else {
            println!("Unknown file type");
        }
    }
    // Create docs directory (root)
    match mkdir_wrapper("/docs") {
        Ok(()) => println!("Docs directory created"),
        Err(e) => println!("Failed to create docs directory: {}", e),
    }
    // Remove docs directory (root)
    match rmdir_wrapper("/docs") {
        Ok(()) => println!("Docs directory removed"),
        Err(e) => println!("Failed to remove docs directory: {}", e),
    }
}
