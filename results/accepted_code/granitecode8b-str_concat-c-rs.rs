use std::ffi::{CStr, CString};
fn main() {
    let s = CString::new("hello").unwrap();
    let s2 = format!("{} literal", s.to_str().unwrap());
    println!("{}", s.to_str().unwrap());
    println!("{}", s2);
}
