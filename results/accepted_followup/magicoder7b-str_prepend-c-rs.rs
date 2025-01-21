use std::ffi::CString;
use std::ptr;

fn main() {
    let mut str = "my String".to_string(); // Create a string variable equal to any text value
    let cstr = CString::new("Changed ".as_bytes()).unwrap(); // Convert the string literal into a C compatible string

    unsafe {
        ptr::write(str.as_mut_ptr(), cstr.to_bytes()); // Prepend the string variable with another string literal

        let dup = CString::from_vec(str).unwrap().into_raw();

        if let Some(s) = dup {
            println!("{}", CString::from_raw(s));
        }
    }
}
