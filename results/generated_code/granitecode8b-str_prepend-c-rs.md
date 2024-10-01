Here is the Rust code that satisfies the given requirements:
```
use std::ffi::{CString, CStr};
fn main() {
 let c_string = CString::new("my String").unwrap();
 let mut c_string_mut = unsafe { c_string.as_ptr() as *mut i8 };
 let cstr = CString::new("Changed ").unwrap();
 let new_string = format!("{}{}", cstr.to_str().unwrap(), unsafe { CStr::from_ptr(c_string_mut).to_str().unwrap() });
 let c_string_new = CString::new(new_string).unwrap();
 unsafe {
     *c_string_mut = std::ptr::null_mut();
     libc::free(c_string_mut as *mut libc::c_void);
 }
 println!("{}", c_string_new.to_str().unwrap());
}
``` 
Note that the code above is not completely equivalent to the original C code, as there are some differences in memory management and string manipulation. However, it should produce similar results.

