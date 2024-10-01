extern crate winsapi;
use std::ffi::{wide, OsStr};
use std::io::Error as IOError;
use winsapi::shared::minwindef::*;
use winsapi::um::fileapi::*;
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
    unsafe {
        CreateFileW(
            p.as_ptr(),
            GENERIC_READ,
            FILE_SHARE_READ,
            std::ptr::null_mut(),
            OPEN_EXISTING,
            FILE_ATTRIBUTE_NORMAL,
            None,
        )
    }
    .map(|h| Handle(h))
    .map_err(IOError::from_raw_os_error)
}
fn get_file_size(fso: &HANDLE, filename: &str) -> Result<u64, IOError> {
    let os_str = wide(filename);
    unsafe { GetFileSize(fso.0, std::ptr::null_mut()) }
        .map(|s| s as u64)
        .and_then(|size| {
            if size != 0 {
                Ok(size)
            } else {
                Err(IOError::from_raw_os_error(GetLastError() as i32))
            }
        })
        .and_then(|size| {
            let mut overlapped = OVERLAPPED::default();
            unsafe { GetFileSizeEx(fso.0, &mut size as *mut u64, &mut overlapped) }
                .map(|_| size)
                .or_else(|err| {
                    if err == ERROR_INCOMPLETE_READ {
                        Ok(size)
                    } else {
                        Err(IOError::from_raw_os_error(err as i32))
                    }
                })
        })
        .and_then(|size| {
            unsafe { CloseHandle(fso.0) };
            Ok(size)
        })
        .map_err(|err| IOError::from_raw_os_error(err as i32))
}
