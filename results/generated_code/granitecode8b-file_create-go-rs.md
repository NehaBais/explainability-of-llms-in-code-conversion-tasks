Here's the converted code from Golang to Rust:
```
use std::fs;
use std::io;
fn main() -> io::Result<()> {
 fs::write("output.txt", b"")?;
 fs::create_dir("docs")?;
 Ok(())
}
```
This code uses the `std::fs` module to create a file called "output.txt" with an empty byte slice as its contents and a directory called "docs". The `b""` syntax creates an empty byte slice, which is written to the file. The `?` operator is used to propagate errors from the `fs::write` and `fs::create_dir` functions. If any errors occur, they will be returned by the function and handled accordingly.

