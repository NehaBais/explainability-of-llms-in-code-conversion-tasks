 In Rust, you can use the `std::fs::metadata` function to get metadata of a file or directory. The size in bytes of a file is contained within the `Metadata::len` method. Here's how you might convert this C code:

```rust
extern crate std;
use std::fs;

fn main() {
    match fs::metadata("input.txt") {
        Ok(meta) => println!("{}", meta.len()),
        Err(e) => eprintln!("Error: {}", e),
    };

    match fs::metadata("/input.txt") {
        Ok(meta) => println!("{}", meta.len()),
        Err(e) => eprintln!("Error: {}", e),
    };
}
```
Note that in Rust, you don't need to explicitly include certain modules like `<stdlib.h>`, because those things are implicitly included when the Rust compiler is run, and also the `stat` function doesn't exist in Rust as far as I know, hence we use `fs::metadata`.
