Sure, here's the equivalent Rust code for creating a directory and any missing parents:
```
use std::fs;
use std::io;
fn main() -> io::Result<()> {
 let path = "./path/to/dir";
 
 fs::create_dir_all(path)?;
 
 println!("Directory created successfully");
 
 Ok(())
}
```
This code uses the `fs` module in Rust to create a directory and any missing parents. The `create_dir_all` function takes a path string as input and creates all necessary directories along the way. The `?` operator is used to handle any errors that may occur during the creation process. If an error occurs, it will be returned as a result of the function.

