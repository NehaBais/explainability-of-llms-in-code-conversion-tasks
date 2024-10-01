Sure, here is the equivalent code in Rust:

```rust
use std::fs;
use std::io;
use std::path::PathBuf;

fn main() {
    let mut file_sizes = vec![0, 0];  // sizes for input.txt and /input.txt

    for (i, &filename) in [("input.txt", "input:\\?.txt"), ("/input.txt", "/input:\\?.txt")].iter() {
        let mut file = fs::File::new(&PathBuf::from(filename)).expect(&format!("Couldn't open {}", filename));
        file.read_to_endless(&mut file_sizes[i]).expect(&format!("Error reading {}", filename));  // read into `file_sizes[i]`, expect a success
        println!("Size of {} is {:?} bytes.", filename, &*file_sizes[i]); // print the size
    }
}
```
Note that in this example, we are using `fs::File::new()` to open files and `fs::file_size()` to get their sizes. The `read_to_endless` method is used instead of `read` for reading an entire file into memory, which was not possible or required in the original C++ code. Also note that Rust uses `\?` to escape special characters such as `:` in filenames. `PathBuf::from()` and `fs::file_size()` are Rust's versions of equivalent C++ functions.
