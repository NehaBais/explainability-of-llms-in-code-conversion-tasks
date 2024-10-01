In Rust you can use the `std::fs::metadata()` function from the standard library to get file metadata which includes size information. The equivalent code in Rust would look like this:

```rust
use std::path::Path;
use std::fs::metadata;

fn main() -> Result<(), std::io::Error> {
    let path1 = Path::new("input.txt");
    let meta1 = metadata(&path1)?;
    println!("Size of input.txt: {}", meta1.len());

    // Note that getting the size of a file at root level is OS-dependent and not portable.
    // Here it's done for Unix-like systems (not including Windows):
    #[cfg(unix)]
    {
        let path2 = Path::new("/input.txt");
        let meta2 = metadata(&path2)?;
        println!("Size of /input.txt: {}", meta2.len());
    }

    Ok(())
}
```
Please note that getting the size information for a file at root level (i.e. '/input.txt') is not portable across all operating systems and might require specific handling based on the system type (`#[cfg(unix)]`).
