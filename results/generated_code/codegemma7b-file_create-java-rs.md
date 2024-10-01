```rust
use std::fs::File;
use std::path::Path;

fn main() {
    // Create the files here
    create_files(Path::new("."));

    // Create the files in the filesystem root
    create_files(Path::new("/"));
}

fn create_files(path: &Path) {
    // Create the output.txt file
    File::create(path.join("output.txt")).unwrap();

    // Create the docs directory
    File::create_dir(path.join("docs")).unwrap();
}
```
