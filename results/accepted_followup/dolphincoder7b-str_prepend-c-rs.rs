extern crate libc;
use std::ffi::{CStr, CString};
fn main() {
    let str: CString = CString::new("my String").unwrap();
    let cstr: CString = CString::new("Changed ").unwrap();

    unsafe {
        let dup = libc::strdup(str.as_ptr());
        let concatenated_str = format!(
            "{}{}",
            cstr.to_str().unwrap(),
            CStr::from_ptr(dup).to_str().unwrap()
        );

        println!("{}", concatenated_str);
    }
}
