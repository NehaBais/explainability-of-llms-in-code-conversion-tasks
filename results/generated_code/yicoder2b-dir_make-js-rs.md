The equivalent code in Rust would be as follows:

```rust
extern crate fs;
use fs::{File, FileType};
use std::fs::{create_dir_recursive, remove_file, read_link, LinkOption, Path, read} ;

fn main() {
    let mut path = Path::new("./path/to/dir");
    if let Some(_) = read_link(&path) {
        println!("{}", path.as_str());
        // If the link exists, remove it and then try again.
        remove_file(path).expect("The file can't be removed.");
    } else if !path.is_dir() {
        // The directory doesn't exist. Create its parent and try again.
        create_dir_recursive(&path.parent().unwrap()).expect("Failed to create parent directories.") ;
    }
}
```
Please note that Rust and JavaScript are different languages, they do not have a built-in equivalent for `mkdir -p` and the way to handle it is slightly different due to the different language features. Also remember that this code will only work if you have `fs` crate in your `Cargo.toml` file as it uses some of its functionality. You can add it by adding the following lines to your `Cargo.toml`:
[dependencies]
fs = "1"
