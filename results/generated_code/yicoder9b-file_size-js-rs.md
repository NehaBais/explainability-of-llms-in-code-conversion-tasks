Here is the equivalent code in Rust:

```rust
use std::fs::metadata;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let filepath1 = "input.txt"; 
    let filepath2 = "/input.txt"; // replace '/' with the correct path separator on your OS
    println!("{} bytes", get_file_size(filepath1)?);
    println!("{} bytes", get_file_size(filepath2)?);
    Ok(())
}

fn get_file_size(path: &str) -> Result<u64, Box<dyn std::error::Error>> {
    let meta = metadata(path)?;
    Ok(meta.len())
}
```
Rust doesn't have an inbuilt support for ActiveXObject as it is a feature of the Windows Script Host (WSH) which is used to run scripts on the Microsoft Windows platform. Rust has built-in libraries like `std::fs` that are used to work with file systems. 

This code will print out the size in bytes of two different files, one in the current working directory and another at the root level of your file system (replace '/' with the correct path separator on your OS).

It is worth noting that the Rust standard library doesn’t have a cross-platform way to get filesize without opening the file. The method used here, `metadata()`, gets all the filesystem metadata for the file in question and returns a structure (`FileMetadata`) which includes the length of the file. 

In addition, unlike JavaScript where we can directly print the size by calling `Size` on file object returned from `GetFile`, in Rust we have to use len() function to get the size after fetching metadata using metadata() function and store it into a variable (`meta`) before finally returning meta.len() which gives us size of file in bytes.
