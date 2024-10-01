use std::ffi::CString;

fn main() {
    let str = "my String";
    let cstr = CString::new("Changed ").unwrap();
    let dup = unsafe { str.to_owned() };
    let new_str = format!("{}{}", cstr, dup);
    drop(dup);
    println!("{}", new_str);
}
