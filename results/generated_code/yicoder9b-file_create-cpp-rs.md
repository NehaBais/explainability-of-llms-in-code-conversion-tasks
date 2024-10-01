In Rust there is no direct equivalent to the C++ `filesystem` library, but you can use the standard library's `fs` module and `std` modules for file handling. The following Rust code does what your C++ program was supposed to do:

```rust
use std::io;
use std::fs;

fn main() -> io::Result<()> {
    create_empty_file("output.txt")?;
    create_empty_file("/output.txt")?;

    fs::create_dir("docs")?;
    fs::create_dir("/docs")?;

    Ok(())
}

fn create_empty_file(path: &str) -> io::Result<()> {
    let file = fs::File::create(path)?;
    io::Write::write_all(&file, &[])?;
    Ok(())
}
```

Please note that the paths "/output.txt" and "/docs" will only work if your Rust application has sufficient privileges to write files/directories at the filesystem root. Also remember to handle errors properly in a real-world situation by using appropriate error handling techniques or macros, which are omitted for simplicity here.
