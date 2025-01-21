The error occurs because we are trying to use the `libc` crate for string manipulation, but it is not present in the standard library that Rust uses by default. 

To fix this issue, we can add a dependency on the `libc` crate by adding a line at the top of the file.

Once the line has been added, the code should compile without any errors. You will need to install the `libc` crate via Cargo.

Here's the corrected code:

```rust
extern crate libc;
use std::ffi::{CStr, CString};
fn main() {
    let str: CString = CString::new("my String").unwrap();
    let cstr: CString  = CString::new("Changed ").unwrap();

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
```