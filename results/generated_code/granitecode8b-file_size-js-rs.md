Here's the converted code from JavaScript to Rust:
```rust
extern crate winsapi;
use winsapi::um::fileapi::*;
use winsapi::shared::minwindef::*;
use std::ffi::{OsStr, wide};
use std::io::Error as IOError;
fn main() {
 let fso = windows_file_system_object();
 match get_file_size(fso.as_ref().unwrap(), "input.txt") {
 Ok(size) => println!("Size of input.txt: {} bytes", size),
 Err(err) => println!("Error getting file size: {}", err),
 }
 match get_file_size(&windows_file_system_object().unwrap(), "c:/input.txt") {
 Ok(size) => println!("Size of c:/input.txt: {} bytes", size),
 Err(err) => println!("Error getting file size: {}", err),
 }
}
fn windows_file_system_object() -> Result<HANDLE, IOError> {
 let p = wide("Scripting.FileSystemObject");
 unsafe { CreateFileW(p.as_ptr(), GENERIC_READ, FILE_SHARE_READ, std::ptr::null_mut(), OPEN_EXISTING, FILE_ATTRIBUTE_NORMAL, None) }
 .map(|h| Handle(h))
 .map_err(IOError::from_raw_os_error)
}
fn get_file_size(fso: &HANDLE, filename: &str) -> Result<u64, IOError> {
 let os_str = wide(filename);
 unsafe { GetFileSize(fso.0, std::ptr::null_mut()) }
 .map(|s| s as u64)
 .and_then(|size| {
 if size != 0 { Ok(size) } else { Err(IOError::from_raw_os_error(GetLastError() as i32)) }
 })
 .and_then(|size| {
 let mut overlapped = OVERLAPPED::default();
 unsafe { GetFileSizeEx(fso.0, &mut size as *mut u64, &mut overlapped) }
 .map(|_| size).or_else(|err| {
 if err == ERROR_INCOMPLETE_READ { Ok(size) } else { Err(IOError::from_raw_os_error(err as i32)) }
 })
 })
 .and_then(|size| {
 unsafe { CloseHandle(fso.0) };
 Ok(size)
 }).map_err(|err| IOError::from_raw_os_error(err as i32))
}
```
This code uses the `windows-sys` crate to interact with the Windows file system API. It defines a function `get_file_size()` that takes a handle to the file system object and the name of a file, and returns the size of the file in bytes. The main() function demonstrates how to use this function to get the size of two files: "input.txt" in the current working directory, and "c:/input.txt" on the file system root.

