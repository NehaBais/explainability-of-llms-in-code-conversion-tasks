The error occurred because Rust's `match` statement expects an `enum` type, but `m.len()` returned a `u64` value, not a `Result`. The fix is to wrap the `m.len()` in `Ok` to match the expected type of `Result<u64, Error>`. The corrected code is:

```rust
use std::fs;
use std::io;

fn print_file_size(filename: &str) -> io::Result<()> {
    match fs::metadata(&filename).and_then(|m| Ok(m.len())) {
        Ok(size) => println!("Size of file {} is {} bytes.", filename, size),
        Err(e) => eprintln!("Error occurred: {}", e),
    }
    Ok(())
}

fn main() -> io::Result<()> {
    print_file_size("input.txt");
    print_file_size("/input.txt");
    Ok(())
}
```
