Here's the Rust code that achieves the same result as the given C++ code:
```
use std::fs;
use std::io::prelude::*;
fn main() {
 let mut f = File::create("output.txt").expect("Unable to create file");
 drop(f);
 let mut f = OpenOptions::new().write(true).create(true).open("/output.txt").expect("Unable to create file");
 drop(f);

 fs::create_dir("docs").expect("Unable to create directory");
 fs::create_dir("/docs").expect("Unable to create directory");
}
```
This code uses the Rust standard library's `fs` module to work with files and directories. The `File::create` method creates a new file called "output.txt" in the current working directory, and the `OpenOptions::new` method allows you to open the file for writing and creation if it doesn't already exist. 
The `fs::create_dir` method creates a new directory called "docs" in the current working directory, and the same method with a path starting with "/" creates the directory in the filesystem root.

