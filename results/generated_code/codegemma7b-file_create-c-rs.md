```rust
use std::fs::File;
use std::fs::create_dir;

fn main() {
    // Create a new file called "output.txt" in the current working directory.
    let _file = File::create("output.txt").expect("Failed to create file");

    // Create a new directory called "docs" in the current working directory.
    create_dir("docs").expect("Failed to create directory");

    // Create a new file called "output.txt" in the filesystem root.
    let _file = File::create("/output.txt").expect("Failed to create file");

    // Create a new directory called "docs" in the filesystem root.
    create_dir("/docs").expect("Failed to create directory");
}
```
