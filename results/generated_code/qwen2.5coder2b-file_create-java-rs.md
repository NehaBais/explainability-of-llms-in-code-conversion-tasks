```rust
use std::fs;
use std::io::{self, Write};

fn main() -> io::Result<()> {
    let here_output_path = "output.txt";
    let root_output_path = "/output.txt";
    let docs_path = "docs";

    fs::create_dir_all(docs_path)?;
    
    // Create the file in the current working directory
    let file_handle1 = fs::File::create(here_output_path)?;

    // Create the file at the filesystem root
    let file_handle2 = fs::File::create(root_output_path)?;

    Ok(())
}
```
