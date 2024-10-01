Sure, here's the code in Rust that performs the same task:
```
use std::fs;
use std::io;
fn print_file_size(path: &str) -> io::Result<()> {
 let metadata = fs::metadata(path)?;
 println!("Size of {} is {}", path, metadata.len());
 Ok(())
}
fn main() -> io::Result<()> {
 print_file_size("input.txt")?;
 print_file_size("/")?;
 Ok(())
}
```
Note that the Rust code uses the `fs` module to get information about files and directories, while the Golang code uses the `os` module.

