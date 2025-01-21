The error "main function not found in crate" occurs when no main entry point is defined for the Rust program, which is required by rustc during compilation to generate executables.

In your case you have closed a block prematurely at line 6 with } character. This would close the module, but it's not necessary because there are no modules in this scope. It should be removed.

Here's the corrected code:

```rs
use std::{fs, path::Path};

pub fn mkdir_p(path: &str) -> std::io::Result<()> {
    fs::create_dir_all(Path::new(path))?;
    Ok(())
}

fn main() {
    match mkdir_p("/tmp/some/path/to/dir") {
        Ok(()) => println!("Directory created successfully"),
        Err(e) => println!("Error creating directory: {:?}", e),
    }
}
```
