Here's the converted code from C to Rust:
```rust
use std::ffi::{CStr, CString};
fn main() {
 let s =CString::new("hello").unwrap();
 let s2 = format!("{} literal", s.to_str().unwrap());
 println!("{}", s.to_str().unwrap());
 println!("{}", s2);
}
```
This code creates a string variable `s` and another string variable `s2` by concatenating the original variable with another string literal using the `format!` macro. The content of both variables is then printed to the console using the `println!` macro. 
Note that in Rust, strings are immutable by default, so we need to use the `CString` type from the `std::ffi` module to create a mutable string that can be modified. We also need to use the `to_str()` method on the `CStr` type to convert it back to a Rust-compatible string.

