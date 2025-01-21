The error is due to the fact that `str.push_str` expects a `&str` argument, but `cstr` is of type `&CStr`. The fix is to use the `as_ptr()` method on `cstr` to get a raw pointer to the null-terminated string and then pass it to `push_str`:
```rust
use std::ffi::CStr;
use std::string::String;

fn main() {
    let mut str = String::from("Good Morning");
    let cstr = CStr::from_bytes_with_nul(b" to all\0").unwrap();
    let cstr2 = CStr::from_bytes_with_nul(b" !!!\0").unwrap();
    if str.len() > str.capacity() {
        str.push_str(cstr.as_ptr());
        str.push_str(cstr2.as_ptr());
        println!("{}", str);
    }
}
```
