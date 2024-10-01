
Here's the code in Rust:

```
use std::string::String;
use std::ffi::CStr;

fn main() {
    let mut str = String::from("Good Morning");
    let cstr = CStr::from_bytes_with_nul(b" to all\0").unwrap();
    let cstr2 = CStr::from_bytes_with_nul(b" !!!\0").unwrap();
    if str.len() > str.capacity() {
        str.push_str(cstr);
        str.push_str(cstr2);
        println!("{}", str);
    }
}
```
In Rust, you don't need to worry about memory allocation or null termination like in C because the `String` type does it for you automatically. 

Also, using `CStr::from_bytes_with_nul()` is safe and efficient way to create a `CStr` from a byte array that has a nul terminator.
