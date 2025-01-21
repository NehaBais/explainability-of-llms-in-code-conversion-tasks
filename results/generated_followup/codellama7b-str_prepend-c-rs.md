The error is caused by the fact that `CString` doesn't implement the `std::fmt::Display` trait, which means it can't be used with the `format!` macro to create a formatted string. The fix is to use the `to_string()` method of the `CString` object to convert it to a `String`, and then use this string in the `format!` macro.

Here is the corrected code:
```rs
use std::ffi::CString;

fn main() {
    let str = "my String";
    let cstr = CString::new("Changed ").unwrap();
    let dup = unsafe { str.to_owned() };
    let new_str = format!("{}{}", cstr, dup.to_string());
    drop(dup);
    println!("{}", new_str);
}
```
