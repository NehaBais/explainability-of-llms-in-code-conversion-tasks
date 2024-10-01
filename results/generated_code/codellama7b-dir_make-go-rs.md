```
use std::fs;

fn mkdir_all(path: &str, mode: u32) -> Result<(), Error> {
    fs::create_dir_all(path)?;
    fs::set_permissions(path, Permissions::from_mode(mode))?;
    Ok(())
}
```
Here's the code in Rust. 

The main change from the original Golang code is that the `os` module has been replaced by the `fs` module, which provides a set of functions for interacting with the file system. The `mkdir_all` function takes two arguments: `path`, a string specifying the path to create, and `mode`, an integer representing the permissions mode for the new directory.

The function first creates the directory using `fs::create_dir_all`. If successful, it sets the permissions for the directory using `fs::set_permissions` with the `mode` argument as the new permissions. Finally, it returns a result object indicating whether the operation was successful.
