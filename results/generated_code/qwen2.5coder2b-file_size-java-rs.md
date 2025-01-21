Sure, here is the equivalent Rust code for your Java program. This example assumes that you have a `main` function in a file called `main.rs`.

```rust
use std::fs;
use std::io;

fn main() -> io::Result<()> {
    // Define the file names to be checked.
    let file_a_name = "file.txt";
    let file_b_name = "/file.txt";

    // Construct the full paths to the files.
    let file_a_path = std::path::PathBuf::from_str(file_a_name).expect("Failed to create path for file A");
    let file_b_path = std::path::PathBuf::from_str(file_b_name).expect("Failed to create path for file B");

    // Get the size of the file at `file_a_path`.
    if let Ok(size) = fs::metadata(&file_a_path)?.len() {
        println!("{size} B");
    } else {
        println!("File not found.");
    }

    // Get the size of the file at `file_b_path`.
    if let Ok(size) = fs::metadata(&file_b_path)?.len() {
        println!("{size} B");
    } else {
        println!("File not found.");
    }

    Ok(())
}
```

This Rust program will print the sizes of the files specified in the code. If a file does not exist, it will print an error message.
