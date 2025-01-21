 The errors reported by Rust are:
- `unused import`: This is because we imported `std::mem` but didn't use it anywhere in the program.
- `mismatched types`: In line 10, we are trying to write bytes (converted from a C string) into a mutable pointer of type `&mut str`, which Rust does not allow due to type mismatch.
- `cannot find function 'strdup' in this scope`: The function `strdup` is equivalent to the standard library function `CString::from_vec(s).unwrap().into_raw()`. But Rust doesn't recognize it as a valid function.
- `this error originates in the macro $crate::format_args_nl which comes from the expansion of the macro println (in Nightly builds, run with -Z macro-backtrace for more info)`: We are using `println!` macro to print CString to stdout but Rust's standard library does not implement `Display` trait for CString.

The corrected version of code is as follows:
```rs
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
```
