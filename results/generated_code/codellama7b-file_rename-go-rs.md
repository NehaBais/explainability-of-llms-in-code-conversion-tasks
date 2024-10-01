To convert the code from Go to Rust, you can use the following:
```rust
use std::{fs, path};

fn main() {
    let input_path = path::Path::new("input.txt");
    let output_path = path::Path::new("output.txt");
    fs::rename(input_path, output_path).unwrap();
    
    let docs_path = path::Path::new("docs");
    let mydocs_path = path::Path::new("mydocs");
    fs::rename(docs_path, mydocs_path).unwrap();
}
```
Note that in Rust, you need to use the `fs` module to perform file operations. Additionally, the `rename` function takes two `Path` objects as arguments, one for the source and one for the destination. The source and destination paths are specified using `path::Path` structures, which represent a file path in the filesystem.

Also note that in Rust, you need to use the `.unwrap()` method to handle errors. This is because the `fs::rename` function returns a `Result<(), io::Error>` object, which represents the result of the operation and may contain an error if it fails. By calling `.unwrap()`, you can get the underlying value (in this case, nothing) or panic with an error message if the operation failed.

To run the code in the current working directory, you can use the `fs::rename` function without specifying a path. For example:

use std::{fs, path};

fn main() {
    let input_path = path::Path::new("input.txt");
    let output_path = path::Path::new("output.txt");
    fs::rename(input_path, output_path).unwrap();
}

This will rename the file `input.txt` to `output.txt` in the current working directory.
