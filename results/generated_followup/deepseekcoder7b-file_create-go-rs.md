The error message indicates that there are type mismatches in the function arguments, specifically `&str` is expected but `PathBuf` was given instead. The other error suggests calling a method on `&str` which does not exist; it would be more accurate to say this line attempts to call `to_str()` on `&str` which doesn't exist as that conceptually makes no sense, the string slice (`&str`) type in Rust is immutable and has a fixed length.

The fix involves changing the argument passed to `create_file` function from `cwd.join("output.txt")` to `cwd.join("output.txt").as_path()`, which converts the PathBuf back into an &str that is expected by create_file function and then converting it using `to_string()` method.

```rs
let root = std::env::current_dir().unwrap();  // This line retrieves current directory path of your program
create_file(cwd.join("output.txt").as_path())?;
create_dir("docs")?;
create_dir((root.to_string() + "\\docs").as_str())?;  
```
