Rust code to achieve the same functionality as the C++ code: 
```
use std::fs::{self, File};

fn main() -> io::Result<()> {
    let path_to_create = &std::env::args().nth(1).unwrap(); // Path to create

    if fs::exists(&path_to_create) {
        return Ok(());
    } else if fs::create_directories(&path_to_create) {
        return Ok(());
    } else {
        eprintln!("couldn't create directory: {}", path_to_create);
        return Err(io::Error::new(io::ErrorKind::Other, "Could not create directory"));
    }
}
```
The above code uses the following Rust features: 

* `std` - The main crate provides a variety of basic utility functions for operating with files and directories. This library is included by default.
* `fs` - A module that provides functionality for working with the file system.
* `File` - An object represents a file on the disk. It provides several methods for interacting with the file, including reading and writing.
* `std::env::args()` - This function returns an iterator over the command line arguments passed to the program. This function is included by default.
* `PathBuf` - A type that wraps a path buffer and provides methods for working with paths in Rust.

The code first retrieves the second argument from the command line using  `std::env::args().nth(1).unwrap()`, which represents the path to be created. The program then checks whether the path already exists using `fs::exists()`. If it does, the program returns successfully without further action. However, if the path doesn't exist and can't be created, the program prints an error message indicating that the directory couldn't be created.
