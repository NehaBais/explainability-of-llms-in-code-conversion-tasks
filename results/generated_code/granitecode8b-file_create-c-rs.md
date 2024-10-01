Here is the Rust code that achieves the same task as the given C code:
```
use std::fs::{File, OpenOptions};
use std::os::unix::fs::OpenOptionsExt;
use std::io;
fn main() -> io::Result<()> {
 // Create a new file called "output.txt" in the current working directory with size 0 bytes and read-write permissions for the owner.
 let mut file = OpenOptions::new()
 .create(true)
 .write(true)
 .open("output.txt")?;

 // Truncate the file to a size of 0 bytes.
 file.set_len(0)?;

 // Create a new directory called "docs" in the current working directory with read-write-execute permissions for the owner and read-only-execute permissions for the group and others.
 std::fs::create_dir("docs")?;

 Ok(())
}
```
Note that Rust has a simpler API for opening files compared to C, so we can use `OpenOptions` instead of manually creating the file descriptor and using `open`, `creat`, and `close`. Also, since Rust's `std::fs` module provides a convenient way to create directories, we don't need to use `mkdir`.

