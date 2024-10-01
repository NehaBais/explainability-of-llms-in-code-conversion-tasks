The equivalent code in Rust would be:

```rust
use std::fs;

fn main() {
    let mut file = match fs::OpenOptions::new().create(true).writeable().open("output.txt") {
        Err(e) => println!("Error opening output.txt: {:?}", e),
        Ok(_) => {}, // file will be dropped if we reach here
    };
    match fs::OpenOptions::new().create(true).writeable().open("/output.txt") {
        Err(e) => println!("Error opening /output.txt: {:?}", e),
        Ok(_) => {} // file will be dropped if we reach here
    };
    let dir = match fs::OpenOptions::new().create(true).writeable().open("docs") {
        Err(e) => println!("Error opening docs: {:?}", e),
        Ok(_) => {} // directory will be dropped if we reach here
    };
    match fs::OpenOptions::new().create(true).writeable().open("/docs") {
        Err(e) => println!("Error opening /docs: {:?}", e),
        Ok(_) => {} // directory will be dropped if we reach here
    };
}
```
Please note that in Rust, the filesystem operations are not direct translations of the Node.js ones. However, they do mirror the behavior. If there's an error, it is logged to console and ignored. The `create(true)` option is used to create a new file if it doesn’t exist or a directory if it doesn't exist yet.

Also, please note that Rust is compiled language where files are stored in memory until the program has been run/accessed. It means you would not be able to see "output.txt" or "docs" until you execute your code.
