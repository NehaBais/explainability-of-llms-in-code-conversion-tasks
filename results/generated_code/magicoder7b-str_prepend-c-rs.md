 In Rust, you can achieve the same result with a simpler and more idiomatic code. Here is the equivalent of your C++ code in Rust:

```rust
use std::ffi::CString;
use std::ptr;
use std::mem;

fn main() {
    let mut str = "my String".to_string();  // Create a string variable equal to any text value
    let cstr = CString::new("Changed ".as_bytes()).unwrap();   // Convert the string literal into a C compatible string
    
    unsafe {
        ptr::write(str.as_mut_ptr(), cstr.to_bytes());  // Prepend the string variable with another string literal
        let dup = strdup(&*str);
        
        if let Some(s) = dup {
            println!("{}", CString::from_raw(s));
        }
    }
}
```

Note: There is no equivalent to `free` in Rust, as the runtime automatically handles memory management for us. Also, unlike C++, string manipulation is typically handled with higher-level constructs (like the `String::insert_str()` method) in Rust. 

In this case, we are using raw pointers and `write` function to achieve the effect of the C code. Be aware that working with raw pointers can be very dangerous if you're not careful about memory management, so use them judiciously.
