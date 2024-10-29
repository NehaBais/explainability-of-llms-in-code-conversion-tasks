Here is the equivalent Rust code to perform file and directory moving operations with std::fs library in Rust which provides functions for filesystem operation like `rename`. However, it's important to note that there are no direct equivalents of the ActiveX Scripting objects available in the standard Rust libraries since Rust is a systems programming language designed to be secure and fast at runtime rather than providing an extensive set of utilities similar to other languages (like JavaScript).

```rust
use std::fs;

fn main() -> std::io::Result<()> {
    // Moving file "input.txt" to "output.txt" in the current directory
    fs::rename("input.txt", "output.txt")?; 
    
    // Moving folder "docs" to "mydocs" in the current directory
    fs::rename("docs", "mydocs")?;
    
    // Moving file "c:/input.txt" to "c:/output.txt" at root of filesystem
    let path_to_root = "/"; 
    fs::rename(&format!("{}/input.txt", path_to_root), &format!("{}/output.txt", path_to_root))?;
    
    // Moving folder "c:/docs" to "c:/mydocs" at root of filesystem
    fs::rename(&format!("{}/docs", path_to_root), &format!("{}/mydocs", path_to_root))?; 
    
    Ok(())
}
```
Please replace `"/"` with the correct filepath to root directory of your filesystem. The above code assumes that you have write access to all directories where files and folders are moving, else it will throw an error. 

Note: This code must be run as a super user in order for operations on system level paths like `"/"` to succeed (unless the specific path is made accessible to the running process).

