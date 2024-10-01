Sure, here's the equivalent Rust code:
```rust
use std::fs;
fn main() -> Result<(), std::io::Error> {
 fs::File::create("output.txt")?;
 fs::File::create(format!("{}/output.txt", std::env::current_dir()?.display()))?;
 fs::create_dir("docs")?;
 fs::create_dir(format!("{}/docs", std::env::current_dir()?.display()))?;
 Ok(())
}
```
This code uses the `std::fs` module to create files and directories. The `File::create()` method creates a new file with the specified name and returns an `Ok` result if the operation is successful, or an `Err` result if an error occurs. The `format!` macro is used to construct the full path of the output file in the current directory. Similarly, the `std::env::current_dir()` function retrieves the current working directory, and the `File::mkdir()` method creates a new directory with the specified name. Again, this returns an `Ok` result if the operation is successful, or an `Err` result if an error occurs. The `format!` macro is used to construct the full path of the output directory in the current directory.

