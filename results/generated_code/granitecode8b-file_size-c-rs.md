Here's the converted code from C to Rust:
```rust
extern crate libc;
use std::io;
use std::fs;
use libc::stat;
use libc::struct_stat;
fn main() {
 let mut foo = unsafe { std::mem::MaybeUninit::uninit().assume_init() };
 let res = unsafe { stat(b"input.txt".as_ptr() as *const _, &mut foo) };
 if res != 0 {
 println!("Error getting file size: {}", io::Error::last_os_error());
 return;
 }
 let file_size = unsafe { (*foo.st_size) as usize };
 println!("File size of input.txt in current working directory is {} bytes", file_size);
 let res = unsafe { stat(b"/input.txt".as_ptr() as *const _, &mut foo) };
 if res != 0 {
 println!("Error getting file size: {}", io::Error::last_os_error());
 return;
 }
 let file_size = unsafe { (*foo.st_size) as usize };
 println!("File size of input.txt in root directory is {} bytes", file_size);
}
```
Note that this code uses the `libc` crate to call the `stat` function, and also uses the `struct_stat` struct from the `libc` crate to get the file size. It also uses the `std::mem::MaybeUninit::uninit().assume_init()` method to initialize the `foo` variable without having to write unsafe code. The `io::Error::last_os_error()` method is used to print any errors that occur when getting the file size. Finally, it prints out the file sizes for both files in the current working directory and the root directory.

