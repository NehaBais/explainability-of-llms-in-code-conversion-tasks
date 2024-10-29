Below is the Rust equivalent code for your JavaScript function: 

Please note that in Rust we usually handle errors with `Result` types and not callbacks. Here's how you can create a directory recursively in Rust using `std::fs::create_dir_all`:
```rust
use std::fs;
use std::path::Path;

fn mkdirp(path: &str) -> Result<(), Box<dyn std::error::Error>> {
    let _ = fs::create_dir_all(path)?;
    Ok(())
}
```
In this code, `?` is used to propagate errors upward. If the function encounters an error (like a file not found) it will return that error immediately upwards in the stack. The calling function can handle these errors as they come. 

If `create_dir_all` successfully creates all necessary directories, then `Ok(())` is returned to signify successful completion of the operation. This follows Rust's convention where a Result type is returned from functions that could potentially fail. Callers are responsible for handling these potential errors and can do so using pattern matching on the return value.

