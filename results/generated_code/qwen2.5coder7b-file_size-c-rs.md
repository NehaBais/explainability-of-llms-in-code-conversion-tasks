Here is how you can convert the given C code to Rust. The conversion uses the `std::fs` and `std::io::ErrorKind` modules in Rust for file operations.

```rust
use std::fs::File;
use std::io::{self, Read};
use std::path::Path;

fn main() -> io::Result<()> {
    let path1 = Path::new("input.txt");
    let mut file1 = File::open(path1)?;
    let metadata1 = file1.metadata()?;
    println!("Size of file at {}: {} bytes", path1.display(), metadata1.len());

    let path2 = Path::new("/input.txt");
    let mut file2 = File::open(path2)?;
    let metadata2 = file2.metadata()?;
    println!("Size of file at {}: {} bytes", path2.display(), metadata2.len());

    Ok(())
}
```

In this Rust version, we directly get the file size using `File::metadata` instead of `stat`. The file contents are not read, which is more efficient for just checking the file size. The `?` operator is used to handle potential errors that can occur during file opening and metadata fetching.

Make sure to run the program with appropriate permissions to access files at `/input.txt`, as it might require root privileges depending on your system configuration.
